#include <stdio.h>
/**
 * swap_int - swaps the values of two integers
 *
 * @a: first variable
 * @b: second variable
 * Return: NULL
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
