class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int lR(0),hR(matrix.size()-1),mid,l,r;

        while(lR < hR)
        {
            mid = (hR - lR) / 2 + lR;
            if(matrix[mid][0] == target)
                return (true);
            if(matrix[mid][0] < target && target < matrix[mid+1][0])
            {
                lR = mid;
                break;
            }
            if(matrix[mid][0] < target)
                lR = mid + 1;
            else
                hR = mid - 1;
        }
        
        l = 0;
        r = matrix[0].size() - 1;

        while(l <= r)
        {
            mid = l + (r - l) / 2;
            if(matrix[lR][mid] == target)
                return true;
            if(matrix[lR][mid] < target)
                l = mid + 1;
            else
                r = mid - 1;
        }
        return (false);
    }

};