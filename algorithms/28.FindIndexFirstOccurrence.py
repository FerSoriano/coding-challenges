class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        if haystack == needle:
            return 0
        if len(haystack) < len(needle):
            return -1
        h = 0
        n = 0
        index = []
        while h < len(haystack):
            if n == len(needle):
                break
            if needle[n] == haystack[h]:
                index.append(h)
                h += 1
                n += 1
            elif index:
                h = index[0] + 1
                n = 0
                index = []
            else:
                h += 1
                n = 0
                index = []
        
        if n == len(needle):
            return index[0]
        else:
            return -1


sol = Solution()
#           012345678910
haystack = "mississippi"
needle = "issipi"
print(sol.strStr(haystack,needle))

"""
if haystack == needle:
            return 0        
        i = 0
        for j,e in enumerate(haystack):
            if i == len(needle):
                break
            if e == needle[i]:
                i += 1
            else:
                i = 0

        if len(needle) == 1:
            index = j
        else:
            index = j - i
        return index if i > 0 else -1
"""