#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - Entry point 
 * @s: size parameter
 *
 */

size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (h == NULL)

			return (s);
		else
			h = h->next;
			s++;
	}

	return (s);
}
