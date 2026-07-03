class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;

        int mp = (l + r) / 2;
        
        while (l <= r) {
            if (target == nums[mp]) {
                return mp;
            }
            if (target < nums[mp]) {
                r = mp - 1;
            }
            else if (target > nums[mp]) {
                l = mp + 1;
            }
            mp = (l + r) / 2;
        }

        return -1;
    }
};
