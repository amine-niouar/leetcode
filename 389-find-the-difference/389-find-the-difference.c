
char findTheDifference(char * s, char * t)
{    
   int a =0;
    int b = 0;
    
    while(*s)
    {
        a+= *s;
        *s++;
    }
    while(*t)
    {
        b+= *t;
        *t++;
    }
    return((char)(b - a));
}
