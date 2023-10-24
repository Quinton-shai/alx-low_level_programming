#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at an index in a linked_list
 * @head: first node in the linked_list
 * @index: index of the node to return
 * Return: pointer to the node we are looking for or null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp = head;

while (temp && i < index)
{
temp = temp->next;
++i;
}

return (temp ? temp : NULL);
}
