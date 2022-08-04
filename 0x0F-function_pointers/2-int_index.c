#include <stdio.h>
#include "function_pointers.h"
/**
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;


	if (!size || !array)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 0)
			return (i);
		else if (i + 1 == size)
			return (-1);
	}
}
