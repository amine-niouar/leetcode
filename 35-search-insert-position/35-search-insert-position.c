

int searchInsert(int* nums, int numsSize, int target){
    
    int i;
    int count;
    
    count = 0;
    i = 0;
    while(i < numsSize)
    {
        if(nums[i] == target || nums[i] > target)
            return (i);
        if(target > nums[i])
            count++;
        i++;
    }
    if(count == i)
        return (count);
    
    return (0);
}