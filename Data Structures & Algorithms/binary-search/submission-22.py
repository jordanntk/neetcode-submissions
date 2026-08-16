class Solution:
    def search(self, nums: List[int], target: int) -> int:
        l = 0
        r = len(nums) - 1

        while l <= r: # less or equal to consider the case where l and r
                      # lands on the target.
            m = l + ((r - l) // 2) # prevents arithmetic overflow
            print("m: ", m)
            print("l: ", l, "r: ", r)
            if nums[m] == target:
                return m
            
            if target > nums[m]:
                l = m + 1
            elif target < nums[m]:
                r = m - 1

        return -1