#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - Entry point
 * @head: pointer to the list_t list
 * @ptr: storage pointer
 * @new: new node
 * Return: number of elements in h
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *ptr;
	unsigned int len = 0;

	ptr = *head;
	new = malloc(sizeof(list_t));
	new->str = strdup(str);

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new;
	return (ptr->next)
}
