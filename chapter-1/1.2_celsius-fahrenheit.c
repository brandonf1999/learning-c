#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;
    
    lower = -20;
    upper = 100;
    step  =   6;
    
    printf("  C\t F\n");

    celsius = lower;
    while(celsius <= upper){
        fahr = celsius * (9.0/5.0) + 32.0;
        printf("%3.0f\t%6.2F\n",celsius,fahr);
        celsius += step;
    }
}
