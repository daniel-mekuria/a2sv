class MinStack
{
public:
    stack<int> st;
    multiset<int> ms;

    void push(int val)
    {
        st.push(val);
        ms.insert(val);
    }

    void pop()
    {
        int top = st.top();
        st.pop();
        ms.erase(ms.find(top));
    }

    int top()
    {
        return st.top();
    }

    int getMin()
    {
        return *ms.begin();
    }
};
