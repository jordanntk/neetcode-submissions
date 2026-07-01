class Solution {
public:
    bool isValid(string s) {
        std::stack<char> charStack;

        for (char c : s) {
            if (c == '[') {
                charStack.push(']');
            }
            else if (c == '(') {
                charStack.push(')');
            }
            else if (c == '{') {
                charStack.push('}');
            }
            else if (charStack.empty() || charStack.top() != c) {
                return false;
            }
            else charStack.pop();
        }
        return charStack.empty();
    }
};
