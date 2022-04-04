
#include <stdio.h>
#include <limits.h>

#include <float.h>

int main(void) {

printf("\nBits of type char: %d\n\n", CHAR_BIT);

printf("\nMax char: %d\n\n", CHAR_MAX);
 printf("\nMin char: %d\n\n", CHAR_MIN);

printf("Maximum value of type signed char: %d\n", SCHAR_MAX); 
printf("Minimum value of type signed char: %d\n\n", SCHAR_MIN);

printf("Maximum value of type unsigned char: %u\n\n", (unsigned) UCHAR_MAX);

printf("Maximum value of type short: %d\n", SHRT_MAX);
printf("Minimum value of type short: %d\n\n", SHRT_MIN); 

printf("Maximum value of type unsigned short: %d\n\n", (unsigned) USHRT_MAX);

printf("Maximum value of type int: %d\n", INT_MAX);

printf("Minimum value of type int: %d\n\n", INT_MIN); 

printf("Maximum value of type unsigned int: %d\n\n", UINT_MAX);

printf("Maximum value of type long: XId\n", LONG_MAX);
printf("Minimum value of type long: Xld\n\n", LONG_MIN);


printf("Maximum value of type unsigned long: %lu\n\n", ULONG_MAX);

printf("The maximum value of float%.10e\n", FLT_MAX); printf("The minimum value of float=%.10e\n", FLT_MIN);

return 0;
}