#include <stdio.h>
/**
 * main - prints the number of arguments passed into the program
 * @argc: Argument count
 * @argv: argument vector
 * Return: 0 (Success)
 */
int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
