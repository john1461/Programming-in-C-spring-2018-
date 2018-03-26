#include<stdio.h>

int main(void)
{
    int f = 27;
    printf("27 degrees Fahrenheit is equal %.2f degrees Celsius", 
            (f - 32) / 1.8);  
    return 0;
}
