class Solution:
    def search(self, nums: List[int], target: int) -> int:
        l = 0
        r = len(nums) - 1
        mp = (l + r) // 2

        while l <= r:
            if nums[mp] == target:
                return mp
            if target > nums[mp]:
                l = mp + 1
            elif target < nums[mp]:
                r = mp - 1
            
            mp = (l + r) // 2

        return -1