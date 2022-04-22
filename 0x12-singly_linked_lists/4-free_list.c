#include "lists.h"
#include <stdlib.h>

/**
  * free_list - frees a list_t list
  * @head: pointer to the head of a list_t list
  */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}

	free(head);
}
