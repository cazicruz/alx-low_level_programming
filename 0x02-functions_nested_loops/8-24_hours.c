#include "main.h"

/**
 * print_last_digit - Entry point
 * @n: this is the input or letter to compare
 * Return: always return 0 (success)
 */

void jack_bauer(void);
{
	int Hours, Mins;
	while (Hours < 24)
	{
		printf("%02d:%02d"Hours,Mins);
		fflush(stdout);
		Mins++;
		if (Mins == 60)
		{
			Hours +=1;
			Mins =0;
		}
	}
	return (0);
}
