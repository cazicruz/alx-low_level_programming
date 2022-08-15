#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - Entry point
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t s = 0;

	if (h == NULL)
		return (s);
	while (h != NULL)
	{
		s++;
		h = h->next;
	}

	return (s);
}
