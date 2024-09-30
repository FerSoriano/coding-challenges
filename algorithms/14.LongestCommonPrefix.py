"""
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
"""

class Solution:
    def longestCommonPrefix(self, strs: list) -> str:
           
        prefix = ''
        strs = sorted(strs)
        print(strs)
        first = strs[0]
        last = strs[-1]

        for i in range(len(first)):
            if first[i] != last[i]:
                return prefix
            prefix += first[i]
        
        return prefix

sol = Solution()
lista = ["flower","flow","flight"]
value = sol.longestCommonPrefix(lista)
print(value)