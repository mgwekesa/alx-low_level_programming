#include "lists.h"
#include <stdlib.h>

/**
  * delete_nodeint_at_index - inserts a new node at a given position
  * @head: head node of the listint_t linked list
  * @idx: the index of the node that should bt deleted, starts at 0
  * Return: 1 if successful, -1 if failed
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 1;
	listint_t *tmp;
	listint_t *d_node;

	if (*head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
	}

	else
	{
		while (i < index)
		{
			tmp = tmp->next;
			if (tmp == NULL)
				return (-1);
			i++;
		}
		d_node = tmp; /*initializes the d_node*/
		d_node = d_node->next;
		tmp->next = d_node->next;
		free(d_node);
	}
	return (1);
}
