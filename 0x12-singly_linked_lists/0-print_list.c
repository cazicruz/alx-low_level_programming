#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - Entry point
 * @h: pointer parameter
 * @size_t: return value of s
 * return: Return s
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (h->str == 0)

			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
