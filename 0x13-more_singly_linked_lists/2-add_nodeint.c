#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint - adds a new node at the beginning of a listint_t list
  * @head: pointer to the head of a list_t list
  * @n: the integer to be added at the beginning
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));

	tmp->n = n;
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}
