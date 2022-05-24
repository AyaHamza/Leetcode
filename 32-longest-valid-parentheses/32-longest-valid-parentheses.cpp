class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        int sum = 0, ans = 0;
        for (int i = 0; i < s.size(); i++)
            if (s[i] == '(')st.push(0);
            else {
                sum = 0;
                while (st.size() && st.top() != 0) {
                    sum += st.top();
                    st.pop();
                    ans = max(ans, sum);
                }
                if (st.size() && st.top() == 0)
                    st.top() += sum + 2, ans = max(ans, st.top());
            }
        if (st.size())sum=0;
            while (st.size()) {
                sum += st.top();
                ans = max(ans, sum);
                if (st.top() == 0)sum = 0;
                st.pop();
            }
        return ans;
    }
};