#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked_list
 * @head: pointer to the 1st element in the linked_list
 * Return: 0 if empty list.
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int num;

if (!head || !*head)
return (0);

num = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

return (num);
}
