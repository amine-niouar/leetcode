class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> tmp;
        int l(0),r(numbers.size()-1),sum;
        
        while(l < r)
        {
            sum = numbers[l] + numbers[r];
            
            if(sum < target)
                l++;
            else if(sum  > target)
                r--;
            else if(sum == target)
            {
                tmp.push_back(++l);
                tmp.push_back(++r);
                return (tmp);
            }
        }

        return (tmp);
    }
};