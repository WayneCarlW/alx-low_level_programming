#include <stdio.h>
#include <string.h>
/**
 * puts_half - prints the second half of a string
 *
 * @str: pointer to a character of a string variable
 * Return: NULL
 */
void puts_half(char *str)
{
	int i;
	int n;
	int lent = strlen(str);

	if (lent % 2 == 0)
	{
		n = lent / 2;

		for (i = n; str[i] != '\0'; i++)
		{
			putchar(str[i]);
		}
		putchar(10);
	}
	else if (lent % 2 != 0)
	{
		n = (lent + 1) / 2;
		for (i = n; str[i] != '\0'; i++)
		{
			putchar(str[i]);
		}
		putchar(10);
	}
}
