#include "lists.h"

/**
 * get_nodeint_at_index - recover node at certain index of linked list
 * @head: a head is used to represent the first node of the linked list
 * @index: this is used to represent the index of the node to be returned
 *
 * Return: this add pointer to the node we want to get or NULL if node is empty
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp_node = head;

	while (temp_node && i < index)
	{
		temp_node = temp_node->next;
		i++;
	}

	return (temp_node ? temp_node : NULL);
}
