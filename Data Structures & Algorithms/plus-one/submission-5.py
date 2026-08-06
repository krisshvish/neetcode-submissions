class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        rev = digits[::-1]
        carry = 0
        i = 0
        print(rev)
        # while i < len(rev):
        #     if (rev[i] + 1) % 10 == 0:
        #         carry = 1
        #         rev[i] = 0
        #     else:
        #         rev[i] = rev[i] + 1
        #         carry = 0
        #         break
        #     i = i+1

        for i,x in enumerate(rev):
            if (x + 1) % 10 == 0:
                carry = 1
                rev[i] = 0
            else:
                rev[i] = x + 1
                carry = 0
                break

        if carry > 0:
            rev.append(1)
        return rev[::-1]