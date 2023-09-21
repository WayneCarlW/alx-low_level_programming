#include <stdio.h>
#include <ctype.h>

void print_buffer(char *b, int size)
{
    int i, j;

    if (size <= 0)
    {
        printf("\n");
        return;
    }

    for (i = 0; i < size; i += 10)
    {
        printf("%08x: ", i);

        for (j = 0; j < 10; j++)
        {
            if (i + j < size)
            {
                printf("%02x", (unsigned char)b[i + j]);
            }
            else
            {
                printf("  ");
            }

            if (j % 2 == 1)
            {
                printf(" ");
            }
        }

        for (j = 0; j < 10; j++)
	{
            if (i + j < size)
		{
                	if (isprint(b[i + j]))
			{
                    	putchar(b[i + j]);
                	}
			else
			{
                    	putchar('.');
                	}
            	}
   	else
		{
                
                putchar(' ');
            	}
        }

        printf("\n");
    }
}
