#include <stdio.h>
/**
 * reverse_array - reverses the position of elements in an array
 *
 * @a: Pointer to integer variable that stores the memory address of an integer
 * @n: Number of elements in an array
 * Return: NULL
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int temp;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}
