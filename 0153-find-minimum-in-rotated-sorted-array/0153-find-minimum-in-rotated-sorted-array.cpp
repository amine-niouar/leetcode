class Solution {
public:
    int findMin(vector<int>& nums) {
        int resmin(INT_MAX),l(0),r(nums.size()-1),midl;
      
        while(l <= r)
        {
            if(nums[l] < nums[r])
                resmin = min(resmin,nums[l]);
            else
                resmin = min(resmin,nums[r]);
            r--;
            l++;
        }
        return (resmin);
    }
};