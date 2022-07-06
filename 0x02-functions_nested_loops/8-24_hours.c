#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * jack_bauer - Entry point
 * @Hours ,@Mins: tis iare time indicators
 * Return: always return 0 (success)
 */

void jack_bauer(void)
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
