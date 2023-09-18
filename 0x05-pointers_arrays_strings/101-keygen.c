#include <stdio.h>
#include <time.h>
/**
 * main - generates a random password for program 101-crackme
 *
 * Return: 0 (success)
 */
int main(void)
{
	char c;
	int x;

	srand(time(0));
	while (x <= 2645)
	{
		c = rand() % 128;
		x += c;
		putchar(c);
	}

	putchar(2772 - x);

	return (0);
}
