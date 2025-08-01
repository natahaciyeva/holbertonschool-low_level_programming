#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: The string to be printed in reverse
 */
void print_rev(char *s)
{
    int len = 0;
    int i;

    /* Find length of string */
    while (s[len] != '\0')
    {
        len++;
    }

    /* Print characters in reverse */
    for (i = len - 1; i >= 0; i--)
    {
        _putchar(s[i]);
    }

    _putchar('\n');
}
