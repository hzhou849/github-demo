/* The logic used is
* ~0 will give bits in 1s.
* (unsigned <type>) will cast it unsigned.
* >> 1 right shifts 1 bit to remove the sign bit.
* (<type>) casting it the required type again
http://www.eng.uerj.br/~fariasol/disciplinas/LABPROG/C_language/Kernighan_and_Ritchie/solved-exercises/solved-exercises.html/index.html
*/


#include <stdio.h>
#include <limits.h>

void bits(void)
{
	printf("Char Bits %d\n", CHAR_BIT);
	printf("Char Min: %d, Char Max: %d\n", CHAR_MIN, CHAR_MAX);
	printf("int Min: %d, int Max: %d\n", INT_MIN, INT_MAX);
	printf("long Min: %d, long Max: %d\n", LONG_MIN, LONG_MAX);
	printf("short min: %d, short Max: %d\n", SHRT_MIN, SHRT_MAX);
	printf("unsigned char max: %d\n", UCHAR_MAX);
	printf("unsigned long max: %d\n", ULONG_MAX);
	printf("unsigned int max: %d\n", UINT_MAX);
	printf("unsigned short: %d (2 ^16)\n", USHRT_MAX);

}


int main (void)
{
	bits();
	printf("\nRepresentation:\n");
	// -1 gives the negative side the extra number bc 0 is on the + side
	printf("Minimum Signed Char %d\n",-(char)((unsigned char) ~0 >> 1) - 1);
	printf("Minimum Signed Char %d\n",((unsigned char) ~0 >> 1 )); //shift 1 bc only 7bits used MSB is sign

	printf("Min Signed Short: %d\n", -(short)((unsigned short)~0 >>1) -1);
	printf("Max signed short: %d\n", (short)((unsigned short) ~0 >> 1));

	printf("Min Signed int: %d\n", -(int)((unsigned int) ~0 >> 1)-1);
	printf("Max signed int: %d\n", (int)((unsigned int)~0 >> 1 ));
	return 0;
}

//  printf("Size of Char %d\n", CHAR_BIT);
//   printf("Size of Char Max %d\n", CHAR_MAX);
//   printf("Size of Char Min %d\n", CHAR_MIN);
//   printf("Size of int min %d\n", INT_MIN);
//   printf("Size of int max %d\n", INT_MAX);
//   printf("Size of long min %d\n", LONG_MIN);
//   printf("Size of long max %d\n", LONG_MAX);
//   printf("Size of short min %d\n", SHRT_MIN);
//   printf("Size of short max %d\n", SHRT_MAX);
//   printf("Size of unsigned char %d\n", UCHAR_MAX);
//   printf("Size of unsigned long %d\n", ULONG_MAX);
//   printf("Size of unsigned int %d\n", UINT_MAX);
//   printf("Size of unsigned short %d\n", USHRT_MAX);

/* Program to print maximum,minimum limits of char,int,long using calculation */

/* The logic used is
* ~0 will give bits in 1s.
* (unsigned <type>) will cast it unsigned.
* >> 1 right shifts 1 bit to remove the sign bit.
* (<type>) casting it the required type again
*/

// #include<stdio.h>

// int main(void)
// {
//     printf("Minimum Signed Char %d\n",-(char)((unsigned char) ~0 >> 1) - 1);
//     printf("Maximum Signed Char %d\n",(char) ((unsigned char) ~0 >> 1));

//     printf("Minimum Signed Short %d\n",-(short)((unsigned short)~0 >>1) -1);
//     printf("Maximum Signed Short %d\n",(short)((unsigned short)~0 >> 1));

//     printf("Minimum Signed Int %d\n",-(int)((unsigned int)~0 >> 1) -1);
//     printf("Maximum Signed Int %d\n",(int)((unsigned int)~0 >> 1));

//     printf("Minimum Signed Long %ld\n",-(long)((unsigned long)~0 >>1) -1);
//     printf("Maximum signed Long %ld\n",(long)((unsigned long)~0 >> 1));

//     /* Unsigned Maximum Values */

//     printf("Maximum Unsigned Char %d\n",(unsigned char)~0);
//     printf("Maximum Unsigned Short %d\n",(unsigned short)~0);
//     printf("Maximum Unsigned Int %u\n",(unsigned int)~0);
//     printf("Maximum Unsigned Long %lu\n",(unsigned long)~0);

//     return 0;
// }