class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m(s1.size()),n(s2.size()),i(0);
        vector<int> count(26);
        if(m > n)
            return (false);
        while(i < m)
        {
            count[s1[i] - 'a']++;
            count[s2[i] - 'a']--;
            i++;
        }
        if(isPermutation(count))
            return true;
        i = m;
        while(i < n)
        {
            count[s2[i] - 'a']--;
            count[s2[i - m] - 'a']++;
            if(isPermutation(count))
                return true;
            i++;
        }
        return (false);
    }
private:
    bool isPermutation(vector<int>& count)
    {
        int i(-1);
        
        while(++i < 26)
        {
            if(count[i] != 0)
                return (false);
        }
        return (true);
    }
};