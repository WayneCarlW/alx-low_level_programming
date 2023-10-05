#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: the variable to be malloced
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(sizeof(b));

	if (mem == NULL)
		exit(98);

	return (mem);
}
