
int check(char c,char *s)
{
    int i;
    int count;
    
    count = 0;
    i = 0 ;
    while(s[i])
    {
        if(c == s[i])
            count++;
        i++;
    }
    return (count);
}


int numJewelsInStones(char * jewels, char * stones){
    
    int i;
    int num;
    
    num = 0;
    i = 0;
    while(jewels[i])
    {
        num += check(jewels[i],stones);
        i++;
    }
    return (num);
}