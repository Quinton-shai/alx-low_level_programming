#include "lists.h"

/**
 * add_nodeint - adding a new node at the start of a linked_list
 * @head: pointer to the first node in the list
 * @n: data to input in that new node
 *
 * Return: Always 0
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (!new)
	return (NULL);

new->n = n;
new->next = *head;
*head = new;

return (new);
}
