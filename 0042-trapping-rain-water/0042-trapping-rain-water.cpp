class Solution {
public:
    int trap(vector<int>& height) {
        int i(-1),size(height.size());
        int l,r,top(0),result(0);
        
        while(++i < size && height[i] == 0);
        
        l = i;
        r = size-1;
        
        while(l < r)
        {
            if(top < min(height[l],height[r]))
                top = min(height[l],height[r]);
            if(height[l] <= height[r])
            {
                l++;
                if(height[l] < top)
                    result += top - height[l];
            }
                
            else
            {
               r--;
               if(height[r] < top)
                    result += top - height[r];
            }
                
        }
        
        return (result);
    }
};