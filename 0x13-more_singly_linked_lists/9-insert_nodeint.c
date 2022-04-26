#include "lists.h"
#include <stdlib.h>

/**
  * insert_nodeint_at_index - inserts a new node at a given position
  * @head: head node of the listint_t linked list
  * @idx: the index at which we are to insert, starts at 0
  * @n: the number to insert
  * Return: address of the new node, or NULL if it failed
  * Description: if it is not possible to add the new node at index idx,
  *              do not add the new node and return NULL
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *tmp;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		new_node->n = n;
		return (new_node);
	}

	if (idx == 0)
	{
		new_node->next = *head;
		new_node->n = n;
		*head = new_node;
		return (new_node);
	}

	tmp = *head;
	while (i < idx)
	{
		tmp = tmp->next;
		i++;
	}
	new_node->n = n;
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
