#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdbool.h>
/**
 * skipNonAlphanumeric - helper function to skip all the non alphanumeric
 * characters
 *
 * @s: pointer to character in string
 * @start: starting point
 * @end: ending point
 * Return: nothing
 */
void skipNonAlphanumeric(char *s, int *start, int *end)
{
    while (*start < *end && !isalnum(s[*start]))
    {
        (*start)++;
    }
    while (*start < *end && !isalnum(s[*end]))
    {
        (*end)--;
    }
}
/**
 * is_palindrome_recursive - checks if string is palindrome
 *
 * @s: string to be checked
 * @start: beginning from
 * @end: ending at
 * Return: 1 if true 0 otherwise
 */
int is_palindrome_recursive(char *s, int start, int end)
{
    if (start >= end)
    {
        return (1);
    }

    skipNonAlphanumeric(s, &start, &end);

    if (tolower(s[start]) != tolower(s[end]))
    {
        return (0);
    }
    return is_palindrome_recursive(s, start + 1, end - 1);
}
/**
 * is_palindrome - calls is_palindrome_recursive with the appropriate starting
 * and ending indices
 *
 * @s: pointer to a character in the string
 * Return: 1 when palindrome and 0 otherwise
 */
int is_palindrome(char *s)
{
    int len = strlen(s);

    return (is_palindrome_recursive(s, 0, len - 1));
}
