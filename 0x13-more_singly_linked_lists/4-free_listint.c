#include "lists.h"

/**
 * free_listint - it frees or delets a linked list
 * @head: This are the listint_t list to be freed from memory
 */
void free_listint(listint_t *head)
{
	listint_t *temp_node;

	while (head)
	{
		temp_node = head->next;
		free(head);
		head = temp_node;
	}
}
