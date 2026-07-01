#include <ranges>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> numIndexMap;

        for (const auto& [i, num] : std::views::enumerate(nums)){
            int comp = target - num;
            if (numIndexMap.contains(comp)) {
                return {numIndexMap[comp], static_cast<int>(i)};
            }
            else {
                numIndexMap[num] = i;
            }
        }
    }
};
