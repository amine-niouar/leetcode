class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        l =[]
        r = 0
        for x in digits:
            r = r * 10 + x
        r += 1
        while(r):
            l.append(r % 10)
            r /= 10
        l.reverse()
        return (l)