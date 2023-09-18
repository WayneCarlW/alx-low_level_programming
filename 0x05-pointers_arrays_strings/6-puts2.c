#include <stdio.h>
#include <string.h>
/**
 * puts2 - prints the even characters of a string
 *
 * @str: pointer to a character variable
 * Return: NULL
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
	i++;
	}
	putchar(10);
}
