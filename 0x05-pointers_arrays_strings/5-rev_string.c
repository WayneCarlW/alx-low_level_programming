#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverses a string
 *
 * @s: pointer to a string character
 * Return: NULL
 */
void rev_string(char *s)
{
	int start = 0;
	int lent = strlen(s);
	int end = lent - 1;

	while (start < end)
	{
		char temp = s[start];

		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
