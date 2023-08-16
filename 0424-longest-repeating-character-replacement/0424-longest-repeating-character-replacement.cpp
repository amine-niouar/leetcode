class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> count(26);
        int maxCount(0),l(0),r(0),res(0),size(s.size()),window;
      
        while(r < size)
        {
            count[s[r] - 'A']++;
            maxCount = max(maxCount,count[s[r] - 'A']);
            window = r - l + 1;
            if(window - maxCount > k)
            {
                count[s[l] - 'A']--;
                l++;
            }
            window = r - l + 1;
            res = max(res,window);
            r++;   
        }
        return (res);
    }
};