class Solution:
    def removeDuplicates(self, nums: list[int]) -> int:
        
        k = 0
        for e in range(0,len(nums)):
            if (e + 1 >= len(nums)):
                nums[k] = nums[e]
                k += 1
            elif nums[e] != nums[e + 1]:
                nums[k] = nums[e]
                k += 1
        return k, nums
    

nums = [0,0,1,1,1,2,2,3,3,4]
sol = Solution()
k = sol.removeDuplicates(nums)
print(k)

