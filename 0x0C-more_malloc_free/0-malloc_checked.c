#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - malloc allocates memory
 * @b: this is the number of bytes to allocate
 *
 * Return: return a ptr to allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);

if (ptr == NULL)
exit(98);

return (ptr);
}
