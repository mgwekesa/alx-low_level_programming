#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint_end - adds a new node at the end of a listint_t list
  * @head: pointer to the head of a list_t list
  * @n: the integer to be added at the beginning
  * Return: the address of a new element, or NULL if it failed
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tmp;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return ('\0');

	new_node->n = n;
	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		new_node->next = NULL;
		tmp = *head;
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = new_node;
	}
	return (new_node);
}
