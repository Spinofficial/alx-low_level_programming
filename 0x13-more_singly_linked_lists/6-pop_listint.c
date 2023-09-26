#include "lists.h"

/**
 * pop_listint - This deletes the head of a linked list
 * @head: The pointer to the element of the linked list
 *
 * Return: This is the data inside the list deleted
 * or 0 if its empty
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
