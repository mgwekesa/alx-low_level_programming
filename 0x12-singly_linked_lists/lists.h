#ifndef _LIST_H_
#define _LIST_H_
#include <stddef.h>

/**
  * struct s_linked_list - singly linked list
  * @str: string
  * @len: length of the string
  * @next: pointer to the next node
  */

typedef struct s_linked_list
{
	char *str;
	unsigned int len;
	struct s_linked_list *next;
} list_t;

size_t print_list(const list_t *h);
#endif
