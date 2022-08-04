#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: input integer array
 * @size: of the array
 * @cmp: pointer to the function
 * Return: index of the first element for which the cmp is true
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;


	if (!size || !array || !cmp)
		return (-1);
	else if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
