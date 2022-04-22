#include "lists.h"
#include <stdio.h>

/**
  * print_list - prints a linked list
  * @h: pointer to head
  * Return: number of nodes in list as size_t
  */

size_t print_list(const list_t *h)
{
	unsigned int node = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		node++;
		h = h->next;
	}
	return (node);
}
