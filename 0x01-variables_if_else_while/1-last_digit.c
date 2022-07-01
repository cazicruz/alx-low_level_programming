#include <stdlib.h>
#include <time.h>






int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	lastnum = n % 10;

	if (lastnum > 5)
	{	
		printf("Last digit of %d and is %d greater "
				"than 5", n , lastnum);
	}
	else if (lastnum == 0)
	{
		printf("Last digit of %d and is %d and is 0", n , lastnum);
	}
	else if (lastnum < 6 && lastnum != 0)
	{
		printf("Last digit of %d and is %d and is less than 6"
			       " and not 0",n ,lastnum);
	}
	return (0);







}
