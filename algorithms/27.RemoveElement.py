class Solution:
    def removeElement(self, nums: list[int], val: int) -> int:
        
        k = len(nums)
        temp = []

        i = 0
        while i < len(nums):
            if nums[i] == val:
                temp.append(nums[i])
                nums.pop(i)
                k -= 1
            else:
                i += 1

        for e in temp:
            nums.append(e)

        return k, nums

#      
#             x
#           i
#      [0,1,2,3,0,4,2]
nums = [0,1,2,2,3,0,4,2]
val = 2
# nums = [3,2,2,3]
# val = 3
sol = Solution()
k = sol.removeElement(nums, val)
print(k)