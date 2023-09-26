#include <stdio.h>
/**
 * print_diagsums - Calculates the sum of diagonals of a multidimensional array
 *
 * @a: pointer to an array
 * @size: the number of items in the multidimensional array
 */
void print_digsums(int *a, int size);
{
	int mDSum = 0;
	int lDSum = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		mDSum += a[i * size + 1];
		lDSum += a[i * size + (size - 1 - i)];
	}
	printf("%d\n", mDSum + lDSum);
}
