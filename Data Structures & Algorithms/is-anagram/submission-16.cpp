class Solution {
public:
    bool isAnagram(string s, string t) {

        std::unordered_map<char, int> sCount;
        std::unordered_map<char, int> tCount;

        for (char c : s) {
            sCount[c]++;
        }
        for (char c : t) {
            tCount[c]++;
        }

        return sCount == tCount;
    }
};
