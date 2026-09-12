//Problem 1342
//Number of steps to reduce a number to zero
int numberOfSteps(int num) {
    int c=0;
    while (num!=0)
    {
        if (num % 2 == 0)
        num = num /2;
        else
           num = num-1;
           c++;
    }
    return c;
    
}
