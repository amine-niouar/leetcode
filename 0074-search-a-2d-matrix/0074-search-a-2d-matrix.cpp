class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i(-1),size(matrix.size()),l,r,mid;
        while(++i < size)
        {
            l = 0;
            r = matrix[i].size() -1;
            while(l <= r)
            {
                mid = (r - l) / 2 + l;
                if(matrix[i][mid] > target)
                   r = mid - 1; 
                else if(matrix[i][mid] < target)
                    l = mid + 1;
                else
                    return true;
            }
        }
      
        return (false);
    }
};