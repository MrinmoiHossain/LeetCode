class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        m = {}
        
        for i, num in enumerate(nums):
            temp = target - num
            
            if temp in m:
                return [m[temp], i]
            else:
                m[num] = i
