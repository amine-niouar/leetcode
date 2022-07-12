int ft_strlen(char *s)
{
    int i;
    
    i = -1;
    while(s[++i]);
    return (i);
}

int strStr(char * haystack, char * needle){
    
    int i;
    int x;
    int y;
    int count_needle;
    
    count_needle = ft_strlen(needle);
    i = -1;
    while(haystack[++i])
    {
        y = 0;
        x = i;
        while(haystack[x] != '\0' && needle[y] != '\0' && haystack[x] == needle[y])
        {
            y++;
            x++;
        }
        if(y == count_needle)
            return (i);
    }
    return (-1);
}