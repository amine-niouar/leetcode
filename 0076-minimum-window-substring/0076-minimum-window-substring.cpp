class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> m;
        int i(-1),l(0),r(0),counter(t.size()),minStart(0);
        int minLength(__INT_MAX__);

        while(++i < counter)
            m[t[i]]++;

        while(r < s.size())
        {
            if(m[s[r]] > 0)
                counter--;
            m[s[r]]--;
            r++;

            while(counter == 0)
            {
                if(r - l < minLength)
                {
                    minStart = l;
                    minLength = r - l;
                }
                m[s[l]]++;
                if(m[s[l]] > 0)
                    counter++;
                l++;
            }
        }
        if(minLength != INT_MAX)
            return s.substr(minStart,minLength);
        return "";
    }
};