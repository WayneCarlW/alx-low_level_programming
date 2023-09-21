#include <stdio.h>
/**
 * print_number - prints an integer
 * printDigits - helper function to recursively print digits
 *
 * @n: Integer to be printed
 * @num: individual digit to be printed
 * Return: NUll
 */
void print_number(int n)
{
	if (n == 0)
	{
		putchar('0');
		return;
	}

	if (n < 0)
	{
		putchar('-');
		number = -number;
	}

	void printDigits(int num)
	{
		if (num == 0)
		{
			return;
		}
		printDigits(num / 10);
		putchar('0' + num % 10);
	}
	printDigits(n);
}
