#include "lists.h"

/**
 * add_nodeint - This will add a new node at the beggining of a linked list
 * @head: The pointer to the first node in the linked list
 * @n: The data to insert in the new node
 *
 * Return: The pointer to tyhe New node or NULL if it fails
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
