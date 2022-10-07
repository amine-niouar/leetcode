

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int i;
    int x;
    int *t;
    
    x = 0;
    t = malloc(sizeof(int) * numsSize);
    i = -1;
    while(++i < n)
    {
        // 0 + 3
        t[x++] = nums[i];
        t[x++] = nums[i+n];
    }
    *returnSize = numsSize;
    return (t);
}