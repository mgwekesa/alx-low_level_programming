#include "lists.h"
#include <stdio.h>

/**
  * print_listint - prints all the elements of a listint_t list
  * @h: pointer to head
  * Return: number of nodes in list as size_t
  */

size_t print_listint(const listint_t *h)
{
	unsigned int node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		node++;
		h = h->next;
	}
	return (node);
}
