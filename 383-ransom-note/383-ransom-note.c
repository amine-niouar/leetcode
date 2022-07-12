
int check(char c,char *s)
{
    int i;
    int count;
    
    count = 0;
    i = 0;
    while(s[i])
    {
        if(s[i] == c)
            count++;
        i++;
    }
    return (count);
}


bool canConstruct(char * ransomNote, char * magazine){
    
    int i;
    
    
    i = 0;
    while(ransomNote[i])
    {
        if(check(ransomNote[i],magazine) < check(ransomNote[i],ransomNote))
            return (false);
        i++;
    }
    
    
    return (true);
}