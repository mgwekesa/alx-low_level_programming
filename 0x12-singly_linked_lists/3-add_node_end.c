#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
  * add_node_end - adds a new node at the end of a list_t list
  * @head: pointer to the head of the list_t list
  * @str: a string to be added to the list_t list
  * Return: returns NULL on failure, new element otherwise
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *tmp;
	int len;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return ('\0');

	len =  0;
	while (str[len])
		len++;

	new_node->len = len;
	new_node->str = strdup(str);

	if (*head == NULL)
	{
		new_node->next = *head;
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

