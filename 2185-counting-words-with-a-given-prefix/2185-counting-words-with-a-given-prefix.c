#include <string.h>

int match(char * pref, int size,char *s)
{
    int i;
    int ssize;
    
    ssize = strlen(s);
    i = 0;
    while(pref[i] == s[i] && i < ssize && i < size)
        i++;
    if(i == size)
        return (1);
    return (0);
}

int prefixCount(char ** words, int wordsSize, char * pref){
    
    int i;
    int count;
    int size;
    
    count = 0;
    size = strlen(pref);
    i = -1;
    while(++i < wordsSize)
    {
        if(match(pref,size,words[i]))
            count++;
    }
    return (count);
}