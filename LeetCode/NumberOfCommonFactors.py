class Solution:
    def commonFactors(self, a: int, b: int) -> int:
        commonFactors = []
        i = 1
        while a >= i or b >= i:
            if a % i == 0 and b % i == 0:
                commonFactors.append(i)
            i += 1

        return len(commonFactors)
