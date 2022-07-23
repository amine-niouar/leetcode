


int percentageLetter(char * s, char letter){
    int i;
    int count;
    double per;
    count = 0;
    i = -1;
    while(s[++i])
    {
        if(s[i] == letter)
            count++;
    }
    per = (double)count / (double)i;
    per *= 100;
    
    return ((int)per);
}