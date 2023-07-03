class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int,int> counter(0);
        vector<int> shit;
        int max,frequent,i(-1),valid;
        
        
        for(auto n: nums)
            counter[n]++;
        
        while(++i < k)
        {
            valid = 0;
            max = INT_MIN;
            for(auto pair: counter)
            {
                if(max < pair.second)
                {
                    valid=1;
                    frequent = pair.first;
                    max = pair.second;
                }
                    
                // cout << pair.first << " " << pair.second << endl;
            }
            if(valid)
                 counter[frequent] = -1;
                 shit.push_back(frequent);
                 //cout << max << endl;
        }
        
          
       
    
        return (shit);
    }
};