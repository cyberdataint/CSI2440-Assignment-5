#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() 
{
    printf("Minimum value of int: %d\n", INT_MIN);
    printf("Maximum value of int: %d\n", INT_MAX);
    printf("Minimum value of long: %ld\n", LONG_MIN);
    printf("Maximum value of long: %ld\n", LONG_MAX);
    printf("Minimum value of float: %e\n", FLT_MIN);
    printf("Maximum value of float: %e\n", FLT_MAX);
    printf("Minimum value of double: %e\n", DBL_MIN);
    printf("Maximum value of double: %e\n", DBL_MAX);

    unsigned int uint_max = UINT_MAX;
    printf("Maximum value of unsigned int: %u\n", uint_max);
    unsigned int uint_overflow = uint_max + 1;
    printf("Overflow value of unsigned int: %u\n", uint_overflow);

    unsigned int uint_min = 0;
    printf("Minimum value of unsigned int: %u\n", uint_min);
    unsigned int uint_underflow = uint_min - 1;
    printf("Underflow value of unsigned int: %u\n", uint_underflow);

    return 0;
}