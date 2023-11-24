#include <stdlib.h>
#include <stddef.h>

void *_calloc(unsigned int nmemb, unsigned int size) 
{
	size_t t_size;
	void *ptr;

    	if (nmemb == 0 || size == 0)
    	{
		return NULL;
    	}

    	t_size = nmemb * size;

   	ptr = malloc(t_size);

    	if (ptr != NULL)
    	{
        	memset(ptr, 0, t_size);
    	}

    return ptr;
}
