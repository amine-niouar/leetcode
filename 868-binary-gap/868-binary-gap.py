class Solution(object):
    def convertDecimal(self,n):
        bin = ""
        while(n):
            bin += str(n % 2)
            n /= 2
        return (bin[::-1])
    def binaryGap(self, n):
        """
        :type n: int
        :rtype: int
        """
        l = []
        s = -1
        e = -1
        i = 0
        binStr = self.convertDecimal(n)
        print (binStr)
        for b in binStr:
            if b == "1" and s == -1 and e == -1:
                s = i + 1
            elif b == "1" and s != -1 and e == -1:
                e = i + 1
                l.append(e - s)
                s =  i + 1
                e = -1
            i += 1
        if len(l) == 0:
            return (0)
        return(max(l))