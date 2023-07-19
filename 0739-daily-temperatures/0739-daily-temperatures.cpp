class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
       int i(-1),size,today,todayTempo;
       stack<pair<int,int>> daily;
       
        size = temperatures.size();
         vector<int> res(size);
        while(++i < size)
        {
            today = i;
            todayTempo = temperatures[i];
            
            while(!daily.empty() && daily.top().second < todayTempo)
            {
                auto[yesterday,yesterdayTempo] = daily.top();
                daily.pop();
                res[yesterday] = today - yesterday;
            }
            daily.push(make_pair(today,todayTempo));
        }
        return (res);
    }
};