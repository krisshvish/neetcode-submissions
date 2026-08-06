class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        counter = {}
        for x in s:
            counter[x] = counter.get(x, 0) + 1
        
        for x in t:
            if counter.get(x, None):
                counter[x] = counter[x] - 1
                if counter[x] == 0:
                    del counter[x]
            else:
                counter[x] = 1
        print(counter)
        return len(counter.keys()) == 0