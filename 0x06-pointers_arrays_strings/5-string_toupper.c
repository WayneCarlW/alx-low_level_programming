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
	int index = 0;

	while (str[index++])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] = -=32;
		}
		str++;
	}
	return (original);
}
