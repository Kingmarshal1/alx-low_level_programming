#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: size of memory to be allocated.
 * created by Chukwudike Igwe
 * Return: pointer to allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
