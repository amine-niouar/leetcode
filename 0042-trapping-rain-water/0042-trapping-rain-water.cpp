class Solution {
public:
    int trap(vector<int>& height) {
        int result(0),l(0),r(height.size()-1),lMax,rMax;
        
        lMax = height[l];
        rMax = height[r];
        
        while(l < r)
        {
            if(lMax < rMax)
            {
                l++;
                lMax = max(lMax,height[l]);
                result += lMax - height[l];
            }
            else
            {
                r--;
                rMax = max(rMax,height[r]);
                result += rMax - height[r];
            }
        }
        return (result);
    }
};