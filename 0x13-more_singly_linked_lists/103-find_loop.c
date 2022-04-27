#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * find_listint_loop - counts the unique nodes in a listint_t linked list
  * @head: pointer to the first node in a listint_t linked list
  * Return: number of unique nodes in a listint_t linked list
  *          if not looped, return 0
  */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tmp;
	listint_t *temp;

	if (head == NULL || head->next == NULL)
		return ('\0');

	tmp = head->next;
	temp = (head->next)->next;

	while (temp)
	{
		if (tmp == temp)
		{
			tmp = head;

			while (tmp != temp)
			{
				tmp = tmp->next;
				temp = temp->next;
			}

			return (tmp);
		}
		tmp = tmp->next;
		temp = (temp->next)->next;
	}
	return ('\0');
}
