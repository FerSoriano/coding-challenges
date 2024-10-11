class Solution:
    def mergeTwoLists(self, list1: list, list2: list) -> list:

        size = len(list1) + len(list2)

        l3 = []

        a = 0
        i = 0
        j = 0
        while a < size:
            if list1[i] < list2[j]:
                l3.append(list1[i])
                i += 1
            else:
                l3.append(list2[j])
                j += 1
                if j >= len(list2):
                    break

            a += 1

        
        return l3
            
    
""" 
     i
[1,2,4,5]
 
       j
[1,3,4]

[1,1,2,3,4,5]

5

"""


sol = Solution()
l1 = []
l2 = [1,3,4]

print(sol.mergeTwoLists(l1, l2))
      