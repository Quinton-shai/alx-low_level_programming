#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adding a new node at the start of the link lists.
 * @head: Double pointers to the list_t lists.
 * @str: NEW STRING TO ADD ON A NODE.
 *
 * Return: ADRESS FOR NEW ELEMENTS, OR NULL IF IT STARTS TO FAILS.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
unsigned int len = 0;

while (str[len])
	++len;

new = malloc(sizeof(list_t));
if (!new)
	return (NULL);

new->str = strdup(str);
new->len = len;
new->next = (*head);
(*head) = new;

return (*head);
}
