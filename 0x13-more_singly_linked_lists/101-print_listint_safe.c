#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * loop_listint_len - counts the unique nodes in a listint_t linked list
  * @head: pointer to the first node in a listint_t linked list
  * Return: number of unique nodes in a listint_t linked list
  *          if not looped, return 0
  */

size_t loop_listint_len(const listint_t *head)
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
  * print_listint_safe - prints a listint_t linked list
  * @head: pointer to the first node in a listint_t linked list
  * Return: the number of nodes in the list
  */

size_t print_listint_safe(const listint_t *head)
{
	size_t node;
	size_t i = 0;

	node = loop_listint_len(head);

	if (node == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			node++;
		}
	}

	else
	{
		while (i < node)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			i++;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (node);
}
