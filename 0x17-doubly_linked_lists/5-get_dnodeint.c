#include "lists.h"
/**
* get_dnodeint_at_index - nth node of a dlistint_t linked list.
* @head: links the  pointer to the head of the list
* @index: index of the node to return
*
* Return: returns NULL if node starts from 0 else return index
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *present;
unsigned int i;

present = head;
i = 0;
while (present != NULL)
{
if (i == index)
return (present);
present = present->next;
i++;
}
return (NULL);
}
