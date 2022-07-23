class Solution(object):
    
    def count(self,words,word):
        c = 0
        for x in words:
            if word == x:
                c += 1
        return (c)
    
    def countWords(self, words1, words2):
        """
        :type words1: List[str]
        :type words2: List[str]
        :rtype: int
        """
        c = 0
        for x in words1:
            if self.count(words1,x) == 1 and self.count(words2,x) == 1:
                c += 1
        return (c)
        
        
        