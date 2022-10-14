class Solution(object):
    def twoSum(self, nums, target):
        from collections import defaultdict
        d = defaultdict(int)
        for i, n in enumerate(nums):
            m = target - n
            if m in d:
                return [d[m], i]
            else:
                d[n] = i