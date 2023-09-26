#include "lists.h"

/**
 * get_nodeint_at_index - Return The node at a certien index in
 * a linked list
 * @head: The first node in a linked list
 * @index: The index to the node to return
 *
 * Return: The pointer to the node we are looking for or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
