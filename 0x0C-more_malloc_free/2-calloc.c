#include <stdlib.h>
#include "main.h"

/**
 * _memset - occupies a memory with constant byte
 * @s: rep the memory area to be filled by memset
 * @b: char to copy to the memset
 * @n: num of times to copy the constant byte
 * Return: return ptr to the memorny area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}

/**
 * _calloc - allocates memory for an array
 * @nmemb: rep num of elements in a given array
 * @size: rep size of each element
 * Return: return ptr to the memory of area s
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(size * nmemb);

if (ptr == NULL)
return (NULL);

_memset(ptr, 0, nmemb * size);

return (ptr);
}
