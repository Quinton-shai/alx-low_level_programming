#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - singly linked lists.
 * @str: string - (malloc'ed string)
 * @len: length of strings.
 * @next: points to next nodes.
 * @next: points to the next node
 *
 * Description: singly linkd list node struct.
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif

