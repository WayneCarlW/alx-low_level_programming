#include "main.h"
#include <stdio.h>
/**
 * main - prints all arguments it receives
 *
 * @argc: Number of arguments received
 * @argv: An array of argumrnts of size argc
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
