#include "lists.h"
#include <stdlib.h>

/**
  * reverse_listint - reverses a listint_t linked list
  * @head: the first node of listint_t linked list
  * Return: a pointer to the first node of the reversed list
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next;

	if (*head == NULL)
		return ('\0');
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
