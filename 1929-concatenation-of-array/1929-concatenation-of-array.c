

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize){
    
    int *tab;
    int x;
    int z;
    int i;
    
    tab = malloc((numsSize * 2) * sizeof(int));
    
    z = 0;
    i = 0;
    while(i < 2)
    {
        x = 0;
        while(x < numsSize)
        {
            tab[z] = nums[x];
            z++;
            x++;
        }
        i++;
    }
    *returnSize = z;
    return (tab);
}