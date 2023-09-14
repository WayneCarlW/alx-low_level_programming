#include "main.h"
/**
 * _isupper - checks whether a letter is in uppercase
 *
 * Returns: 1 if uppercase, 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
