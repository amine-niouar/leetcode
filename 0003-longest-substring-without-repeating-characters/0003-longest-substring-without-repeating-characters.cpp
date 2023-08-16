class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> sub;
        int maxSize(0),l(0),r(0);
      
        while(r < s.size())
        {
              while(sub.find(s[r]) != sub.end())
              {
                  sub.erase(s[l]);
                  l++;
              }
              maxSize = max(maxSize,r -l + 1);
              sub.insert(s[r]);
              r++;
        }
        
        return (maxSize);
    }
};