#include "lists.h"

/**
 * pop_listint - delete the head node of a linked_list
 * @head: pointer to the first element in the linked_list
 *
 * Return: the data inside elements, otherwisw 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	*head = temp;
	free(*head);

	return (num);
}
