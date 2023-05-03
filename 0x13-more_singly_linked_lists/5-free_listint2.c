#include "lists.h"

/**
 * free_listint2 - This delelets or free a linked list
 * @head: it adds pointer to the listint_t list to be deleted
 */
void free_listint2(listint_t **head)
{
	listint_t *temp_node;

	if (head == NULL)
		return;

	while (*head)
	{
		temp_node = (*head)->next;
		free(*head);
		*head = temp_node;
	}

	*head = NULL;
}
