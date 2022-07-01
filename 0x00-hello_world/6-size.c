#include <stdio.h>

/**
 * main - Entry point
 * 
 * Discription: This is a program to print the size of the data types i accordnce with the system type
 * Return: Always 0 (Success)
 */

int main(void)
{

	printf("Size of a char: %lu byte(s)", sizeof(char));
	printf("Size of int: %lu byte(s)", sizeof(int));
	printf("Size of a long int: %lu byte(s)", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)", sizeof(long long int));
	printf("Size of a float: %lu byte(s)", sizeof(float));


	return 0;
}
