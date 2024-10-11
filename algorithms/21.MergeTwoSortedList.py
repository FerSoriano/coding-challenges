# No lo lee leetcode, funciona... pero en leetcode se le deben de pasar nodos en lugar de listas
class Solution:
    def mergeTwoLists(self, list1: list, list2: list) -> list:
        
        i = 0
        j = 0
        list3 = []

        if not list1:
            return list2
        
        while i < len(list1):
            if j < len(list2):
                if list1[i] < list2[j]:
                    list3.append(list1[i])
                    i += 1
                    continue
                list3.append(list2[j])
                j += 1
            else:
                list3.append(list1[i])
                i += 1
        
        while j < len(list2):
            list3.append(list2[j])
            j += 1
        
        return list3

sol = Solution()
l1 = [1,2,2,2,3]
l2 = [0,3,5,7]

print(sol.mergeTwoLists(l1, l2))