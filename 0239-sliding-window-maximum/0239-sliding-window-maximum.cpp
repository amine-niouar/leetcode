class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> res;

        int r(0),l(0),size(nums.size());

        while(r < size)
        {
            while(!dq.empty() && nums[dq.back()] < nums[r])
                dq.pop_back();
            
            dq.push_back(r);

            if(l > dq.front())
                dq.pop_front();
            if(r + 1 >= k)
            {
                res.push_back(nums[dq.front()]);
                l++;
            }
            r++;
        }
        return res;
    }    
};