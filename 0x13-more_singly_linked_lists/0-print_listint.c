#include "lists.h"

/**
 * 0-print_listint.c
 * @h: a pointer to the head od the list_t list.
 *
 * Return: the number of nodes in the list_t list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
