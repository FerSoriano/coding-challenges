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
needle = "issippi"
print(sol.strStr(haystack,needle))

"""
ChatGPT solution:

class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        # Caso especial: si needle está vacío, retorna 0
        if not needle:
            return 0
        # Si el largo de haystack es menor que el de needle, no puede haber coincidencia
        if len(haystack) < len(needle):
            return -1
        
        # Recorrer haystack hasta que el resto sea menor que needle
        for i in range(len(haystack) - len(needle) + 1):
            # Si encuentras la subcadena needle en haystack, retorna el índice
            if haystack[i:i+len(needle)] == needle:
                return i
        # Si no se encuentra needle en haystack, retornar -1
        return -1
"""