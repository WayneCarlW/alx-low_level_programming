#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - creates an array of integers
 * @min: minimum value of the elements
 * @max: maximum value of the elements
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	size_t size;
	size_t i;

	if (min > max)
	{
		return (NULL);
	}

	size = (size_t)(max - min + 1);
	ptr = malloc(size * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	do {

		ptr[i] = min + (int)i;
		i++;

	} while (i < size);

	return (ptr);
}
