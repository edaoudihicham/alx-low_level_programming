#include "main.h"
/**
 * *malloc_checked - allocates memory using malloc and exit file
 * @b: int
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);

	return (m);
}
