#include <stdio.h>
/**
 * print_array - prints n integer elements of an array
 *
 * @a: integer pointer representing an array
 * @n: number of elements of an array
 * Return: NULL
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
