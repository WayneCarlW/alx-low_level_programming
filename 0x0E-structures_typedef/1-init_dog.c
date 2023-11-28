#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 *
 * @d: pointer to the struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *dy = d;

	dy = malloc(sizeof(struct dog));

	dy->name = name;
	dy->age = age;
	dy->owner = owner;
}
