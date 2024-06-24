class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                // Push opening brackets onto the stack
                st.push(c);
            } else {
                // If stack is empty or top of stack doesn't match the closing bracket
                if (st.empty() ||
                    (c == ')' && st.top() != '(') ||
                    (c == ']' && st.top() != '[') ||
                    (c == '}' && st.top() != '{')) {
                    return false;
                }
                // Pop the matching opening bracket
                st.pop();
            }
        }

        // Stack should be empty if all brackets were matched correctly
        return st.empty();
    }
};

