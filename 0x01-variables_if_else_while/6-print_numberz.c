#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints 0-9
 *
 * Returns: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
