class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        rev = digits[::-1]
        c = 0
        i = 0

        for i,x in enumerate(rev):
            if (x + 1) % 10 == 0:
                c = 1
                rev[i] = 0
            else:
                rev[i] = x + 1
                c = 0
                break

        if c > 0:
            rev.append(1)
        return rev[::-1]