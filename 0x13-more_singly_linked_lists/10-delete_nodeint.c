#include "lists.h"

/**
 * delete_nodeint_at_index - frees node at a index in a linked list
 * @head: this is use to rep pointer to the first element in the list
 * @index: this is used to represent the index of the node to deleted
 *
 * Return: it returns 1 if it succeeded or it returns -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_node = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp_node);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp_node || !(temp_node->next))
			return (-1);
		temp_node = temp_node->next;
		i++;
	}


	current = temp_node->next;
	temp_node->next = current->next;
	free(current);

	return (1);
}
