#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the result of multiplication of two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
	int mul;
	int i, j;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	mul = i * j; 
	
	printf("%d\n", mul);
	return (0);
}
