class Solution {
public:
    int maxArea(vector<int>& height) {
        int result(0),l(0),r(height.size()-1),area;
        
        while(l < r)
        {
            area = (r - l) * min(height[r],height[l]);
            result = max(result,area);
            
            if(height[l] <= height[r])
                l++;
            else
                r--;
        }
        return (result);
    }
};