#include "main.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - returns apointer to a string which is the duplicate of str
 *
 * @str: string given as parameter
 * Return: NULL if str = NULL; a pointer to the copy of str
 */
char *_strdup(char *str)
{
	char *mem;
	int lent;

	if (str == NULL)
	{
		return (NULL);
	}

	lent = strlen(str) + 1;
	mem = (char *)malloc(lent);

	if (mem != NULL)
	{
		strcpy(mem, str);
	}
	return (mem);
}
