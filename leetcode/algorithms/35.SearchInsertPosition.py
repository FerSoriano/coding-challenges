class Solution:
    def searchInsert(self, nums: list[int], target: int) -> int:
        temp = nums

        if target == nums[0]:
            return 0

        i = 1
        while i < len(nums): 
            mitad = len(nums) // 2
            if target == nums[mitad]:
                return temp.index(target)
            if target < nums[mitad]:
                nums = nums[:mitad]
                continue
            if target > nums[mitad]:
                nums = nums[mitad:]
        
        if target > nums[0]:
            return temp.index(nums[0]) + 1
        elif target < nums[0]:
            return temp.index(nums[0]) - 1 if temp.index(nums[0]) != 0 else 0
        else:
            return 0


sol = Solution()
nums = [1,3,5,6,7]
target = 7
print(sol.searchInsert(nums, target))

"""
Solucion ChatGPT:
class Solution:
    def searchInsert(self, nums: list[int], target: int) -> int:
        left, right = 0, len(nums) - 1
        
        # Búsqueda binaria
        while left <= right:
            mid = (left + right) // 2
            if nums[mid] == target:
                return mid
            elif nums[mid] < target:
                left = mid + 1
            else:
                right = mid - 1
        
        # Si no encuentra el target, el índice `left` será la posición de inserción
        return left
"""