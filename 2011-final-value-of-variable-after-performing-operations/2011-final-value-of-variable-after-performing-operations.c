

int check(char * s,char c)
{
    int i;
    i = 0;
    while(s[i])
    {
        if(s[i] == c)
            return (1);
        i++;
    }
    return (0);
}


int finalValueAfterOperations(char ** operations, int operationsSize){
    int i;
    int result;
    
    result = 0;
    i = 0;
    while(i < operationsSize)
    {
        if(check(operations[i],'+'))
            result += 1;
        else if(check(operations[i],'-'))
            result -= 1;
        i++;
    }
    return (result);
}