class Solution:
    def findClosestNumber(self, nums: List[int]) -> int:
        minind = -1
        minval = 999999999
        
        for i in range(0, len(nums)):
            newdif = abs(nums[i])
            if(newdif <= minval):
                minind = i
                minval = newdif
        
        if(nums[minind] < 0 and abs(nums[minind]) in nums):
            return abs(nums[minind])
        else:
            return nums[minind]

        