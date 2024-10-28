#include "main.h"

/**
 * print_string - Prints a string.
 * @list: The list of arguments containing the string to print.
 *
 * Return: The length of the printed string.
 */
int print_string(va_list list)
{
    char *p;
    int length;

    p = va_arg(list, char *);
    length = print((p != NULL) ? p : "(null)");

    return (length);
}
