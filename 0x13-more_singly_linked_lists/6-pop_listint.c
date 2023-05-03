#include "lists.h"

/**
 * pop_listint - frees/deletes the head node in linked list
 * @head: adds a pointer to the first element in the linked list
 *
 * Return: returns the data in elements freed otherwise 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_node;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp_node = (*head)->next;
	free(*head);
	*head = temp_node;

	return (num);
}
