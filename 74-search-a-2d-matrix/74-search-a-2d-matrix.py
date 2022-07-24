class Solution(object):
    def searchMatrix(self, matrix, target):
        """
        :type matrix: List[List[int]]
        :type target: int
        :rtype: bool
        """
        for r in matrix:
            for x in r:
                if x == target:
                    return (True)
        return (False)
        