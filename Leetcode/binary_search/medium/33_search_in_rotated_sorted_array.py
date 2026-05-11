class Solution:
    def search(self, nums: list[int], target: int) -> int: # type: ignore
        
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

        if nums[mid] in indexes: # type: ignore
            return indexes[nums[mid]] if nums[mid] == target else -1 # type: ignore