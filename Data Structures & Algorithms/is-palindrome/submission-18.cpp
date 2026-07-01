class Solution {
public:
    bool isPalindrome(string s) {
        // to convert to alphanum only

        std::erase_if(s, [](auto c) {
            return !std::isalnum(c);
        });

        // convert to lower case only

        std::transform(s.begin(), s.end(), s.begin(), [](auto c) {
            return std::tolower(c);
        });

        std::cout << "alphanum and lowercase: " << s;

        for (size_t i = 0, j = s.length() - 1; char c : s) {
            if (i == s.length() / 2) {
                return true;
            }
            if (s[i] != s[j]) {
                return false;
            }
            ++i;

            if (j > 0) {
                --j;
            }

        }
        std::cout << "ERROR: failed to return while in for loop";
        return true;
    }
};
