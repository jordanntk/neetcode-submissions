class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        # [1, 2, 3, 1] how do you check for 1 being the duplicate without n^2?
        # just hashmap and store every number you iterate lol
        # actually use set() if no need for mapping

        numSet = set()

        for num in nums:
            if num in numSet:
                return True
            else:
                numSet.add(num)
        
        return False

        # numSet