"""
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 

Example 1:

Input: s = "()"

Output: true

Example 2:

Input: s = "()[]{}"

Output: true

Example 3:

Input: s = "(]"

Output: false

Example 4:

Input: s = "([])"

Output: true
"""

class Solution:
    def isValid(self, s: str) -> bool:

        # opened = ['(','[','{']
        # closed = [')',']','}']

        # if len(s) % 2 != 0:
        #     return False

        # if s[0] in closed:
        #     return False
        
        # def valid_string(val: str, current: str = ''):

        #     if len(val) == 1:
        #         return False
        
        #     i = 0 
        #     while i < len(val):

        #         curr = val[i]

        #         if i == len(val) -1 :
        #             i += 1
        #             continue
                    
        #         next = val[i + 1]

        #         if ( curr in opened and next in closed ):
        #             if opened.index(curr) != closed.index(next):
        #                 return False
        #             i += 2
        #             continue
                
        #         if curr in closed:
        #             if (current == '') or (opened.index(current) != closed.index(curr)):
        #                 return False
        #             return i + 1                

        #         elif ( curr in opened and next in opened ):
        #             flag = valid_string(val[i + 1:], current= curr)
        #             if not flag:
        #                 return False
        #             i += flag
                
        #         i += 1

        #     return True
        
        # return valid_string(s)
        
        stack = [] # create an empty stack to store opening brackets
        for c in s: # loop through each character in the string
            if c in '([{': # if the character is an opening bracket
                stack.append(c) # push it onto the stack
            else: # if the character is a closing bracket
                if not stack or \
                    (c == ')' and stack[-1] != '(') or \
                    (c == '}' and stack[-1] != '{') or \
                    (c == ']' and stack[-1] != '['):
                    return False # the string is not valid, so return false
                stack.pop() # otherwise, pop the opening bracket from the stack
        print(stack)
        return not stack # if the stack is empty, all opening brackets have been matched with their corresponding closing brackets,
                         # so the string is valid, otherwise, there are unmatched opening brackets, so return false
    

sol = Solution()
s = "]})]"
print(sol.isValid(s=s))

"""
   i
[[[]

current = [

   i
[[]

current = [

 i
[]


"""