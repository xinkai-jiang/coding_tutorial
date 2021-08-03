class Solution:
    def search(self, nums, target):
        if len(nums) == 1:
            if nums[0] == target:
                return 0
            else:
                return -1

        if nums[int(len(nums)/2)] > target:
            result = self.search(nums[:int(len(nums)/2)], target)
            head = 0
        else:
            result = self.search(nums[int(len(nums)/2):], target)
            head = int(len(nums)/2)

        if result == -1:
            return -1
        else:
            return head + result
        

if __name__ == "__main__":
    s = Solution()
    print(s.search([-1,0,3,5,9,12], 0))