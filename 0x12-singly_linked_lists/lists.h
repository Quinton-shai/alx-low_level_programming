#ifndef LINKED
#define LINKED

#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - singly_linked_list
 * @str: string - malloceg string
 * @len: len of the string
 * @next: Points to the next node
 *
 */
typedef struct list_s
{
char *str;
struct list_s *next;
unsigned int len;
} list_t;

void free_list(list_t *head);
list_t *add_node_end(list_t **head, const char *str);
list_t *add_node(list_t **head, const char *str);
size_t list_len(const list_t *h);
size_t print_list(const list_t *h);
#endif
