#include<stdio.h>

int main(void)
{
    int i1 = 365, i2 = 12258, i3 = 996;
    int j1 = 7, j2 = 23, j3 = 4;
    int Next_multiple_1, Next_multiple_2, Next_multiple_3;
    
    Next_multiple_1 = i1 + j1 - i1 % j1;
    Next_multiple_2 = i2 + j2 - i2 % j2;
    Next_multiple_3 = i3 + j3 - i3 % j3;
    
    printf("Next_multiple for i = 365 is %i\n", Next_multiple_1);
    printf("Next_multiple for i = 12258 is %i\n", Next_multiple_2);
    printf("Next_multiple for i = 996 is %i\n", Next_multiple_3);
    return 0;
}
