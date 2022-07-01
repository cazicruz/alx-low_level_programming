#include <stdio.h>

/**
 * main - Entry point 
 * 
 * Discription: This is a program to print the size of the data types i accordnce with the system type
 *
 *
 */

int main(void)
{

	printf("Size of a char: %i byte(s)", sizeof(char));
	printf("Size of int: %i byte(s)", sizeof(int));
	printf("Size of a long int: %i byte(s)", sizeof(long int));
	printf("Size of a long long int: %i byte(s)", sizeof(long long int));
	printf("Size of a float: %i byte(s)", sizeof(float));
	return 0;
}
