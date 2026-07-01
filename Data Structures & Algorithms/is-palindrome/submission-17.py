class Solution:
    def isPalindrome(self, s: str) -> bool: 
        # V EVEN: aa or abba
        # V ODD: a or aba

        # F EVEN: ab or abca
        # F ODD: abc or abxia
        # noSpace = s.replace(" ", "") this is weak

        cleanedS = "".join(filter(str.isalnum, s)).lower()
        # empty then false
        # single letter = palindrome
        if len(cleanedS) == 1:
            return True
        print(cleanedS)
        j = -1
        for i in range(len(cleanedS)//2):
            if cleanedS[i] != cleanedS[j]:
                return False
            else:
                j = j - 1
        
        return True