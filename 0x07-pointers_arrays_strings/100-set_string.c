#include <stdio.h>
/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: pointer to a pointer
 * @to: what s points to
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	if (*s != NULL)
	{
		free(*s);
	}

	*s = (char *)malloc(strlen(to) + 1;
	if (*s != NULL)
		strcpy(*s, to);
}
