class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if not s: return 0

        left = 0
        right = 0
        substring = {s[0]}
        largest = 1

        while right < len(s) - 1:
            right += 1
            while s[right] in substring:
                substring.remove(s[left])
                left += 1
            substring.add(s[right])
            largest = max(largest, right - left + 1)

        return largest