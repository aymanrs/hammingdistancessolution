class Solution:
    def totalHammingDistance(self, nums: List[int]) -> int:
        bits = [0] * 31;
        for n in nums:
            for i in range(31):
                if n & (1 << i):
                    bits[i] += 1
        total = 0
        for i in range(31):
            total += bits[i] * (len(nums) - bits[i])
        return total
