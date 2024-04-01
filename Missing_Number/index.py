class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        sumArr = 0
        for i in range(len(nums) + 1):
            if i != len(nums):
                sumArr ^= nums[i]
            sumArr ^= i
        return sumArr
