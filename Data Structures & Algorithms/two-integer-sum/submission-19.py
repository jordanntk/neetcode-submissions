class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        numMap = {
            # e.g.
            # 5 : "2", num 5 at index 2
        }

        for i in range(0, len(nums)):
            comp = target - nums[i]
            
            if comp in numMap:
                return [numMap[comp], i]

            else:
                numMap[nums[i]] = i