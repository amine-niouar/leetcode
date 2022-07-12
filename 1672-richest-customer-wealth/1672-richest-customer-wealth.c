

int getTotal(int *account,int size)
{
    int i;
    int total;
    
    i = 0;
    total = 0;
    while(i < size)
    {
        total += account[i];
        i++;
    }
    return (total);
}


int maximumWealth(int** accounts, int accountsSize, int* accountsColSize){
    
    int i;
    int currentTotal;
    int max;
    
    i = 0;
    currentTotal = 0;
    max = 0;
    while(i < accountsSize)
    {
        currentTotal = getTotal(accounts[i],accountsColSize[i]);
        if(max < currentTotal)
            max = currentTotal;
        i++;
    }
    return (max);
}