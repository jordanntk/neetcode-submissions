class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> numSet;

        for (int num : nums) {
            if (numSet.contains(num)) {
                return true;
            } else {
                numSet.insert(num);
            }
        }
        return false;
    }
};