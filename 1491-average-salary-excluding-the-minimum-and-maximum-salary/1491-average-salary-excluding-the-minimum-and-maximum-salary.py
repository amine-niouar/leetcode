class Solution(object):
    def average(self, salary):
        """
        :type salary: List[int]
        :rtype: float
        """
        i = 0
        mins = min(salary)
        maxs = max(salary)
        avg = 0
       
        for s in salary:
            if mins != s and maxs != s:
                avg += s
                i += 1
            
        return (avg / float(i))
        