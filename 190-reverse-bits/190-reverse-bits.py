import math
class Solution:
    # @param n, an integer
    # @return an integer
    
    def convertBin(self,bin):
        i = 31
        r = 0
        for x in bin:
            r += int(x) * int(math.pow(2,i))
            i -= 1
        return (r)
    def convertDecimal(self,n):
        bin = ""
        front = ""
        i = 0
        while(n):
            bin += str(n % 2)
            n /= 2
            i += 1
        x = 0
        while x <= (32 - i):
            front += "0"
            x += 1
        return (bin+front)
    
    def reverseBits(self, n):
        bin = self.convertDecimal(n)
        newn = self.convertBin(bin)
        return (newn)
        