class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.lower()
        new_s = "".join([x for x in s if x.isalnum()])
        return new_s == new_s[::-1]