import math

class Solution(object):
    
    def convertBin(self,num):
        bin = int(num)
        number  = 0
        power = len(num) - 1
        x = 0
        for d in num:
            number += int(d) * int(math.pow(2,power))
            power -= 1
        return (int(number))

    def convertDecimal(self,n):
        bin = ""
        if n == 0:
            return("0")
        while (n):
            bin += str(n % 2)
            n /= 2
        return (bin[::-1])
    
    def addBinary(self, a, b):
        """
        :type a: str
        :type b: str
        :rtype: str
        """
        num1 = self.convertBin(a)
        num2 = self.convertBin(b)
       
        n = num1 + num2
        bin = self.convertDecimal(n)
        return (bin)