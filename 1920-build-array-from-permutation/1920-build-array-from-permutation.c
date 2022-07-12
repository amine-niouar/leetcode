

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* nums, int numsSize, int* returnSize){
    
    int i;
    int *tab;
    
    
    tab = malloc(sizeof(int) * numsSize);
    i = 0; 
    while(i < numsSize)
    {
        tab[i] = nums[nums[i]];
        i++;
    }
    
    *returnSize = i;
    return (tab);
}