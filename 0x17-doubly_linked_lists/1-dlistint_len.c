#include "lists.h"
  
 /**
  * dlistint_len - length of elements in a linked dlistint_t list.
  * @h: refers to the head of the list
  *
  * Return: returns number of nodes present
  */
  
 size_t dlistint_len(const dlistint_t *h)
 {
int counter = 0;

if (h == NULL)
return (counter);

while (h != NULL)
{
counter++;
h = h->next;
}

return (counter);
}
