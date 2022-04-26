#include "lists.h"
#include <stdio.h>

/**
  * listint_len - returns the number of elements in a linked listint_t list
  * @h: pointer to head
  * Return: number of nodes in list as size_t
  */

size_t listint_len(const listint_t *h)
{
	unsigned int node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
