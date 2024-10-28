#include "main.h"

/**
 * print_rev_string - Prints a string in reverse order.
 * @list: The list of arguments containing the string to print.
 *
 * Return: The length of the printed string.
 */
int print_rev_string(va_list list)
{
    int i, length;
    const char *str;

    str = va_arg(list, const char *);
    length = _strlen(str);

    for (i = length - 1; i >= 0; i--)
        _putchar(str[i]);

    return (length);
}
