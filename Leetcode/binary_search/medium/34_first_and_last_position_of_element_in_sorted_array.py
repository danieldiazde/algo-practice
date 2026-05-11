class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:

        def find_left(nums, target):
            result = -1
            lo = 0
            hi = len(nums) - 1

            while lo <= hi:
                mid = (lo + hi) // 2
                if nums[mid] == target:
                    result = mid
                    hi = mid - 1
                elif nums[mid] > target:
                    hi = mid - 1
                else:
                    lo = mid  +  1
            return result

        def find_right(nums, target):
            result = -1
            lo = 0
            hi = len(nums) - 1

            while lo <= hi:
                mid = (lo + hi) // 2
                if nums[mid] == target:
                    result = mid
                    lo = mid + 1
                elif nums[mid] > target:
                    hi = mid - 1
                else:
                    lo = mid  +  1
            return result
        
        return [find_left(nums, target), find_right(nums, target)]

        


        