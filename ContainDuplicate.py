class Solution:
    def containsDuplicate(self, nums):
        self.nums=nums
       
        if len(set(nums))<len(nums):
            return True
        else:
            return False

        
