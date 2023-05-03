#include "lists.h"

/**
 * sum_listint - adds all the data in listint_t list
 * @head: this is use to represent first node in the linked list
 *
 * Return: returns the resulting sum from the first to the last node
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp_node = head;

	while (temp_node)
	{
		sum += temp_node->n;
		temp_node = temp_node->next;
	}

	return (sum);
}
