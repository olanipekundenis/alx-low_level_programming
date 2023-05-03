#include "lists.h"

/**
 * free_listint_safe - deletes a linked list
 * @h: this sets a pointer to the first node
 *
 * Return: returns no of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *temp_node;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp_node = (*h)->next;
			free(*h);
			*h = temp_node;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
