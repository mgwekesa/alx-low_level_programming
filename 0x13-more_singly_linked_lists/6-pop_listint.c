#include "lists.h"
#include <stdlib.h>

/**
  * pop_listint - deletes the head node of a listint_t linked list
  * @head: the head of the listint_t list
  * Return: the head node's data (n)
  */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head == NULL)
		return (0);
	data = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (data);
}
