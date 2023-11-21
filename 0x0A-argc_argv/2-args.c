#include <stdio.h>
/**
 * main - prints the number of arguments passed into the program
 * @argc: Argument count
 * @argv: argument vector
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
	int i;
	
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
