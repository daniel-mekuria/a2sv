class Solution
{
public:
    bool isValid(string s)
    {

        stack<char> st;
        int x = 0;

        if (s.size() == 0)
        {
            return true;
        }

        while (x < s.size())
        {

            if (s[x] == '(' || s[x] == '[' || s[x] == '{')
            {
                st.push(s[x]);
            }

            else if ((s[x] == ')' && !st.empty() && st.top() == '(') ||
                     (s[x] == '}' && !st.empty() && st.top() == '{') ||
                     (s[x] == ']' && !st.empty() && st.top() == '['))
            {
                st.pop();
            }
            else
            {
                return false;
            }
            x++;
        }

        if (st.empty())
        {
            return true;
        }
        return false;
    }
};
