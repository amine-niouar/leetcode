class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        stack<double>fleets;
        double time,maxTime(0);
        int size,i(-1);
        vector<pair<int,double>> vehicles;
        
        size = position.size();
        while(++i < size)
        {
            time = (double)(target - position[i]) / speed[i];
            vehicles.push_back({position[i],time});
        }
        sort(vehicles.begin(),vehicles.end());
        
        fleets.push(0);
        i = size;
        while(--i >= 0)
        {
            if(vehicles[i].second > fleets.top())
                fleets.push(vehicles[i].second);
        }
        
        return (fleets.size() - 1);
    }
    
//     int carFleet(int target, vector<int>& position, vector<int>& speed) {
//         int n = position.size();
        
//         vector<pair<int, double>> cars;
//         for (int i = 0; i < n; i++) {
//             double time = (double) (target - position[i]) / speed[i];
//             cars.push_back({position[i], time});
//         }
//         sort(cars.begin(), cars.end());
        
//         double maxTime = 0.0;
//         int result = 0;
        
//         for (int i = n - 1; i >= 0; i--) {
//             double time = cars[i].second;
//             if (time > maxTime) {
//                 maxTime = time;
//                 result++;
//             }
//         }
        
//         return result;
//     }
};