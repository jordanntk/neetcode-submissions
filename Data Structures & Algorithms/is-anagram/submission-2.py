class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        
        # START build the dict
        sDict= {}
        tDict = {}

        for letter in s:
            sDict[letter] = sDict.get(letter, 0) + 1

        for letter in t:
            tDict[letter] = tDict.get(letter, 0) + 1


        # print("sDict: ", sDict)
        # print("tDict: ", tDict)

        # END build the dict

        return sDict == tDict