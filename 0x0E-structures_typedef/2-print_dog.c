#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints a a struct dog
 *
 * @d: Julien's dog object
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	while (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
		exit(0);
	}

	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
}
