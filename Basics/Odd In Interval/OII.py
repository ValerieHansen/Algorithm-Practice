

class Solution:
    def countOdds(self, low: int, high: int) -> int:
        count = 0
        for x in range(low, high+1):
            if x % 2 == 1:
                count += 1

        return count

