
int compare(const void* a, const void* b)
{
    int l=*(int*)a;
    int p=*(int*)b;
    return (l-p);
}


bool containsDuplicate(int* nums, int numsSize){
    int i;
    int x;
    
    qsort(nums,numsSize,sizeof(int),compare);
    i = -1;
    while(++i < (numsSize-1))
    {
        if(nums[i] == nums[i+1])
            return true;
    }
    return false;
}