"""
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target. # noqa

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

https://leetcode.com/problems/two-sum/description/
"""


class Solution:
    def twoSum(self, nums: list, target: int) -> list:
        # [2,7,11,15] / [3,2,3]

        # Crear un hash map para almacenar los valores y los indices de la lista # noqa
        hash_map = {}

        # se recorre toda la lista
        for i, num in enumerate(nums):
            # sacamos la diferencia del target vs cada valor de la lista
            diff = target - num

            # validamos que este en nuestro hash map
            if diff in hash_map:
                return [hash_map[diff], i]

            # si no esta, se agrega
            hash_map[num] = i

        return None


numbers = [1, 2, 3, 4, 5, 6]
target = 6
sol = Solution()
print(sol.twoSum(nums=numbers, target=target))
