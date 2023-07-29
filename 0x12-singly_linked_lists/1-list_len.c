#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Return the number of
 * elements in a linked list.
 * @h: pointer to the list_t list
 *
 * Return: nuMbers of elements.
 */
size_t list_len(const list_t *h)
{
size_t q = 0;

while (h)
{
	++q;
	h = h->next;
}
return (q);
}
