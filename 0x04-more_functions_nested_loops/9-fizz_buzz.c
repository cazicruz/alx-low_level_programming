#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * return: Always return 0 (success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i == 1)
		{
			printf("%i", i);
		}
		else
		{
			printf("%i ", i);
		}
	}
	printf("\n");
	return (0);
}
