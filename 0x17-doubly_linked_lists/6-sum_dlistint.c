#include "lists.h"

/**
 * sum_dlistint - refers to sum of all integers present
 * @head: refers to the head of the list
 *
 * Return: return 0 if list is present
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *i;

for (i = head; i != NULL; i = i->next)
{
sum += i->n;
}

return (sum);
}
