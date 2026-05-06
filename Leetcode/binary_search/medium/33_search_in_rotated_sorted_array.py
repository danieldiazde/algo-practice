class Solution:
    def search(self, nums: List[int], target: int) -> int:
        
        indexes = {}
        for i in range(len(nums)):
            indexes[nums[i]] = i

        nums.sort()
        low, high = 0, len(nums) - 1
        while low <= high:
            mid = (low + high) // 2
            if nums[mid] == target:
                break
            if nums[mid] < target:
                low = mid + 1
            else:
                high = mid - 1

        if nums[mid] in indexes:
            return indexes[nums[mid]] if nums[mid] == target else -1