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
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void main_constructor(void) __attribute__((constructor));
#endif
