#include "lists.h"

/**
 * print_listint - This prints all elements in a linked list
 * @h: The linked list of listint_t to print
 *
 * Return: The numbers of node
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
