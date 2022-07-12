

char * replaceDigits(char * s){
     int i;
     int plus;
    
     i = 0;
     while(s[i])
     {
         if(s[i] >= '0' && s[i] <= '9' && i >= 1)
            s[i] = s[i-1] + (s[i] - '0');  
         i++;
     }
     return(s);
}