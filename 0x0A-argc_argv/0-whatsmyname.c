#include <stdio.h>
/**
 * main - prints the program name followed by a new line
 * @argc: argument count
 * @argv: pointer to string
 * Return: 0 (Success)
 */
int main(__attribute__((unused)) int argc, char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
