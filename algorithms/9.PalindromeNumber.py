"""
Given an integer x, return true if x is a palindrome, and false otherwise.
https://leetcode.com/problems/palindrome-number/description/
"""

class Solution:
    def isPalindrome(self, x: int) -> bool:  
        # 121 -> True
        x_str = str(x)

        if x_str == x_str[::-1]:
            return True
        else:
            return False