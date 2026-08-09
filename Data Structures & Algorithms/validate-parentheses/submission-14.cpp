class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stack;

        for (char c : s) {
            if (c == '[') {
                stack.push(']');
                continue;
            }
            else if (c == '(') {
                stack.push(')');
                continue;
            }
            else if (c == '{') {
                stack.push('}');
                continue;
            }

            if (stack.empty()) {
                return false;
            }

            if (stack.top() != c) {
                return false;
            }
            stack.pop();
        }
        return stack.empty();
    }
};
