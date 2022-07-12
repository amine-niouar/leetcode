

int numberOfSteps(int num){
    
    int step;
    
    step = 0;
    while(num)
    {
        if(num % 2 == 0)
            num /= 2;
        else
            num -= 1;
        step++;
    }
    return (step);
}