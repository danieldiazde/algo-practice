class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        
        if not nums: return 0
        #We can't sort because thtat would take O(nlogn) 
        seen = set(nums)
        best = 0

        for num in seen:
            if (num - 1) not in seen:
                count = 1
                current_num = num

                while (current_num + 1) in seen:
                    count += 1
                    current_num += 1
                
                best = max(best, count)
        return best

            