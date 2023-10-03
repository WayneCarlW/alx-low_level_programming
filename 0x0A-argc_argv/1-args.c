#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the number of arguments passed to it
 *
 * @argc: The numbe of arguments
 * @argv: An array of the arguments of size argc
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
