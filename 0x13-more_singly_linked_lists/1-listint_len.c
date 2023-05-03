#include "lists.h"

/**
 * listint_len - returns elements in linked lists
 * @h: traverse linked list of type listint_t
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t no = 0;

	while (h)
	{
		no++;
		h = h->next;
	}

	return (no);
}
