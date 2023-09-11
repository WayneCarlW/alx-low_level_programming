#include <stdio.h>
/**
 * main -  Returns combinations of  3 digit numbers
 *cs and space followed by a new line
 *
 *Return: returns 0
 */
int main(void)
{
	int val1,val2,val3;

	for (val1 = 0; val1 < 9; val1++)
	{
		for (val2 = val1 + 1; val2 < 10; val2++)
		{
			for (val3 = val2 + 1; val3 < 10; val3++)
			{
				putchar((val1 % 10) + '0');
				putchar((val2 % 10) + '0');
				putchar((val3 % 10) + '0');

				if (val1 == 7 && val2 == 8 && val3 == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
