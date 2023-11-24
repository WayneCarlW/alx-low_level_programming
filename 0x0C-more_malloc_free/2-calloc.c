#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * _calloc - allocates memory for an array of nmeb elements
 * of size bytes
 * @nmeb: number of elements in array
 * @size: size of the array
 * Return: pointer to the located memory
 */
void *_calloc(unsigned int nmemb, unsigned int size) 
{
	size_t t_size;
	void *ptr;

    	if (nmemb == 0 || size == 0)
    	{
		return (NULL);
    	}

    	t_size = nmemb * size;

   	ptr = malloc(t_size);

    	if (ptr != NULL)
    	{
        	memset(ptr, 0, t_size);
    	}

    return (ptr);
}
