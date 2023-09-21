#include <stdio.h>
/**
 * string_toupper - converts string form lowercase to uppercase
 *
 * @str:  pointer to a string
 * Return: pointer to a string
 */
char *string_toupper(char *str)
{
	char *original = str;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = -=32;
		}
		str++;
	}
	return (original);
}
