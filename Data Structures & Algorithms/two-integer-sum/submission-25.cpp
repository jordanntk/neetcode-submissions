class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> numMap;

        // for (const auto& [i, num] : std::views::enumerate(nums)) {
        //     int comp = target - num;

        //     if (numMap.contains(comp)) {
        //         return {numMap[comp], i};
        //     } else {
        //         numMap[num] = i;
        //     }
        // }

        for (int i = 0; i < nums.size(); i++) {
            int comp = target - nums[i];

            if (numMap.contains(comp)) {
                return {numMap[comp], i};
            } else {
                numMap[nums[i]] = i;
            }
        }
        return {};
    }
};
