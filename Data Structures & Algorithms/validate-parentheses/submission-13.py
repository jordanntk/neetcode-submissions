class Solution:
    def isValid(self, s: str) -> bool:
        # edge cases:
        # '['
        # ']'
        # '[[]'
        # ']]['
        # '[)]'

        stack = []

        for char in s:
            if char == '[':
                stack.append(']')
                continue
            elif char == '{':
                stack.append('}')
                continue
            elif char == '(':
                stack.append(')')
                continue
            
            if not stack:
                return False
            
            if stack[-1] != char:
                print(stack)
                print(stack[-1])
                print(char)
                
                return False
            stack.pop()
        return not stack

            