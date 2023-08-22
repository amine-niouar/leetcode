class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int res(nums[0]),l(0),r(nums.size()-1),mid;

        while(l <= r)
        {
            if(nums[l] < nums[r])
            {
                 res = min(res,nums[l]);
                 break;
            }
            mid = l + (r - l) / 2;
             res = min(res,nums[mid]);
            if(nums[mid] >= nums[l])
                l = mid + 1;
            else
                r = mid - 1;   
        }
        return (res);
    }
};