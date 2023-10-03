#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates all the arguments of a program
 *
 * @ac: number of arguments
 * @av: pointer to an array of pointers to arguments
 * Return: NULL if ac == 0 || av == NULL or on failure
 * pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int tl_lent;
	char *str;
	int i;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	tl_lent = 0;
	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			tl_lent += strlen(av[i]) + 1;
		}
	}

	if (str != NULL)
	{
		str[0] = '\0';
		for (i = 0; i < ac; i++)
		{
			if (av[i] != NULL)
			{
				strcat(str, av[i]);
				strcat(str, "\n");
			}
		}
	}
	return (str);
}
