class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l(1),r(0),size(piles.size()),i(-1),k,res;
        long int hours(0);

        while(++i < size)
            r = max(r,piles[i]);
        res = r;
        while(l <= r)
        {
            k = l + (r - l) / 2;
            hours = 0;
            i = -1;
            while(++i < size)
                hours += ceil((double) piles[i] / k);
            if(hours <= h)
            {
                res = min(res,k);
                r = k - 1;
            }
            else
                l = k + 1;
        }
        return (res);
    }   
};