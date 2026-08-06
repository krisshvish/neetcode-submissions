class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        counter = {}
        if len(t) != len(s):
            return False

        for i in range(len(s)):
            counter[s[i]] = counter.get(s[i], 0) + 1
            counter[t[i]] = counter.get(t[i], 0) - 1
        
        for i in counter.keys():
            if counter[i]:
                return False
        return True