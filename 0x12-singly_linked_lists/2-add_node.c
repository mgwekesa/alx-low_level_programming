#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
  * add_node - adds a new node at the beginning of a list_t list
  * @head: pointer to the head of the list_t list
  * @str: a string to be added to the list_t list
  * Return: returns NULL on failure, new element otherwise
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;
	int len;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return ('\0');

	len =  0;
	while (str[len])
		len++;

	tmp->len = len;
	tmp->str = strdup(str);
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}

