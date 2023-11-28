#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * dog_t - frees dogs
 *
 * @d: all dogs
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	free(d);
}
