#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 * Return: new dog or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_n;

	dog_n = malloc(sizeof(dog_t));
	if (dog_n == NULL)
	{
		return (NULL);
	}
	dog_n->name = name;
	dog_n->age = age;
	dog_n->owner = owner;
	return dog_n;
}
