#include<stdio.h>
#include<limits.h>

int main(void)
{
    printf("Signed char type capable of containing the [%i, %i] range.\n", CHAR_MIN, CHAR_MAX);
    printf("Unsigned char type capable of containing the [%i, %i] range.\n", 0, UCHAR_MAX);
    printf("Signed short type capable of containing the [%i, %i] range.\n", SHRT_MIN, SHRT_MAX);
    printf("Unsigned short type capable of containing the [%i, %i] range.\n", 0, USHRT_MAX);
    printf("Signed int type capable of containing the [%i, %i] range.\n", INT_MIN, INT_MAX);
    printf("Unsigned int type capable of containing the [%i, %u] range.\n", 0, UINT_MAX);
    printf("Signed long int type capable of containing the [%li, %li] range.\n", LONG_MIN, LONG_MAX);
    printf("Unsigned long int type capable of containing the [%i, %lu] range.\n", 0, ULONG_MAX);
    return 0;
}
