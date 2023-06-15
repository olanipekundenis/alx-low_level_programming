#include "lists.h"
/**
* free_dlistint - the parameter represents args frees the list.
* @head: refers to the head of the list.
*/
void free_dlistint(dlistint_t *head)
{
while (head != NULL)
{
dlistint_t *next = head->next;
free(head);
head = next;
}
}
