class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> counter;
        int i(-1),size(nums.size()),count(0);
        
        while(++i < size)
        {
            counter[nums[i]]++;
            if(counter[nums[i]] > 1)
                return (nums[i]);
        }
        return (nums[0]);
    }
};