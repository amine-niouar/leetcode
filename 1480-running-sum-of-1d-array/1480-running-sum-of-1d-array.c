/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int sum(int *nums,int i)
{
    int total;
    int x;
    
    total = 0;
    x = 0;
    while(x <= i)
    {
        total += nums[x];
        x++;
    }
    return (total);
}

int* runningSum(int* nums, int numsSize, int* returnSize){
    
    int *tab;
    int i;
    
    tab = malloc(sizeof(int) * numsSize);
    i = 0;
    
    while(i < numsSize)
    {
        tab[i] = sum(nums,i);
        i++;
    }
    *returnSize = i;
    return (tab);
}