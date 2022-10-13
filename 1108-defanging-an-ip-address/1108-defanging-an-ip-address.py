class Solution(object):
    def defangIPaddr(self, address):
        """
        :type address: str
        :rtype: str
        """
        s = ""
        for x in address:
            if x == ".":
                s += "[.]"
            else:
                s += x
        return (s)