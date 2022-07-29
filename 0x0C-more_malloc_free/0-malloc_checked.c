#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 */

void *malloc_checked(unsigned int b)
{

	void *p = malloc(b);
	if (p == NULL)
	{
		return (98);
	}
	else
		return (p);
}
