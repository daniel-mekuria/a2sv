class Solution {
private:
    long long doOperation(long long lhs, long long rhs, char operation)
    {
        switch(operation)
        {
            case '+' :
                return lhs+rhs;
            case '-' :
                return lhs-rhs;
            case '*' :
                return lhs*rhs;
            case '/' :
                return lhs/rhs;
            default:
                return 0;
        }
    }
    bool isNumber(string st)
    {
        try
        {
           int n = stoi(st); 
           return true;
        }
        catch(exception e) 
        {    
            return false;
        }
    }
public:
    int evalRPN(vector<string>& tokens) 
    {
        stack<string> st;
        for(auto i: tokens)
        {
            string current = i;
            if(isNumber(current))
            {
                st.push(current);
            }
            else
            {
                char operation = current[0];
                long long rhs = stoll(st.top()); st.pop();
                long long lhs= stoll(st.top()); st.pop();
                int result = doOperation(lhs,rhs,operation);
                st.push(to_string(result));
            }
        }
        return stoi(st.top());
    }
};
