class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> st;
        string result;
        for (int i = 0; i < s.size(); i ++) {
            if (s[i] == '(') {
                st.push(i);    
            } else if (s[i] == ')') {
                int top = st.top();
                st.pop();
                reverse(s.begin() + top + 1, s.begin() + i);
            }
        }
        for (auto it: s) {
            if (it != '(' && it != ')') {
                result.push_back(it);
            }
        }
        return result;
    }
};
