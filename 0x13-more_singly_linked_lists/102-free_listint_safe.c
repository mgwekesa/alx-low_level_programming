#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * loop_listint_l - counts the unique nodes in a listint_t linked list
  * @head: pointer to the first node in a listint_t linked list
  * Return: number of unique nodes in a listint_t linked list
  *          if not looped, return 0
  */

size_t loop_listint_l(const listint_t *head)
{
	const listint_t *tmp;
	const listint_t *temp;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tmp = head->next;
	temp = (head->next)->next;

	while (temp)
	{
		if (tmp == temp)
		{
			tmp = head;

			while (tmp != temp)
			{
				node++;
				tmp = tmp->next;
				temp = temp->next;
			}

			tmp = tmp->next;

			while (tmp != temp)
			{
				node++;
				tmp = tmp->next;
			}
			return (node);
		}
		tmp = tmp->next;
		temp = (temp->next)->next;
	}
	return (0);
}

/**
  * free_listint_safe - frees a listint_t linked list safely
  * @h: pointer to the first node in a listint_t linked list
  * Return: the number of nodes in the list freed
  *         Sets the head to NULL
  */

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t node;
	size_t i = 0;

	node = loop_listint_l(*h);

	if (node == 0)
	{
		while (h != NULL && *h != NULL)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			node++;
		}
	}

	else
	{
		while (i < node)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			i++;
		}
		*h = NULL;
	}
	h = NULL;
	return (node);
}
