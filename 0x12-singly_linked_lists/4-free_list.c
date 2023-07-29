#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Liberates a linked_list.
 * @head: list_t lists for freedom.
 */
void free_list(list_t *head)
{
list_t *temp;

while (head)
{
	temp = head->next;
	free(head->str);
	free(head);
	head = temp;
}
}

