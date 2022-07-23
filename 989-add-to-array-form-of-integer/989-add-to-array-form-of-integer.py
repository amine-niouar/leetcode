import math

class Solution(object):
    def addToArrayForm(self, num, k):
        """
        :type num: List[int]
        :type k: int
        :rtype: List[int]
        """
        l = []
        r = 0
        for x in num:
            r = r * 10 + x
        r += k
        if r == 0:
            l.append(0)
            return (l)
        while (r):
            l.append(r % 10)
            r /= 10
        l.reverse()
        return (l)