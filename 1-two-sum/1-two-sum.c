

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    
    int i;
    int *new;
    int x;
    
    new = malloc(sizeof(int) * 2);
    i = -1;
    while(++i < numsSize)
    {
        x = i;
        while(++x < numsSize)
        {
            if((nums[i] + nums[x]) == target && x != i)
            {
                new[0] = i;
                new[1] = x;
                *returnSize = 2;
                return (new);
            }
                
        }
    }
    
    return (0);
}