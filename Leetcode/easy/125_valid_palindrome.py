class Solution:
    def isPalindrome(self, s: str) -> bool:
        if not s: return True
        s = ''.join(char.lower() for char in s if char.isalnum())
        if s == s[::-1]: return True

        return False