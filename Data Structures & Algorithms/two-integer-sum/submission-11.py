class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        numIndexMap = {}
        # e.g. { "number": index of number in array }

        for i, num in enumerate(nums):
            complement = target - num
            
            if complement in numIndexMap:
                # question says to return the smaller (earlier) index first, so the index of the complement is always first
                return [numIndexMap[complement], i]
            else:
                numIndexMap[num] = i