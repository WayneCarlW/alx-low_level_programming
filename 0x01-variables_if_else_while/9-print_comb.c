#include <stdio.h>
/**
 * main - Combinations of single digit numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for ( j = 0; j < 10; j++)
		{
			putchar(i);
			putchar(j);
		}
	}
	putchar('\n');
	return (0);
}	
