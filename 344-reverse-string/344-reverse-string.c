

void reverseString(char* s, int sSize){
    
    int i;
    char swp;
    int rev;
    
    i = 0;
    rev = sSize - 1;
    
    while(i < (sSize / 2))
    {
        swp = s[i];
        s[i] = s[rev];
        s[rev] = swp;
        rev--;
        i++;
    }
    return (s);
}