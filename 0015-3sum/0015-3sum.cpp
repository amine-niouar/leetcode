class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int i(-1),size(nums.size()),l,r,sum;
        vector<vector<int>> tmp;
        sort(nums.begin(),nums.end());
        
        while(++i < size)
        {
            if(i > 0 && nums[i] == nums[i-1])
                    continue;
            
            l = i+1;
            r = size -1;
            
            while(l < r)
            {
                sum = nums[i] + nums[l] + nums[r];
                if(sum > 0)
                    r--;
                else if(sum < 0)
                    l++;
                else
                {
                    vector<int> triplet;
                    
                    tmp.push_back({nums[i],nums[l],nums[r]});
                    l++;
                    while(nums[l] == nums[l-1] && l < r)
                        l++;
                }
            }
        }
        return (tmp);
    }
};