#include "lists.h"
#include <stdlib.h>

/**
  * get_nodeint_at_index - returns the nth node of a listint_t linked list
  * @head: head of the listint_t linked list
  * @index: index of the node, starting at 0
  * Return: returns NULL if node does not exit, otherwise the node
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return ('\0');

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return ('\0');
}
