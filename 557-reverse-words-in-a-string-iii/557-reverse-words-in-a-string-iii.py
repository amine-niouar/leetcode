class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        ns = ""
        srcs = s.split(" ")
        for src in srcs:
            ns += src[::-1]
            ns += " "
        if len(ns) > 0:
            ns =  ns.rstrip(" ")
        return (ns)