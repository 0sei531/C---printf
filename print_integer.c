#include "main.h"

/**
 * print_integer - Prints a number in base 10 (decimal).
 * @list: The list containing the number to print.
 *
 * Return: The length of the printed decimal number.
 */
int print_integer(va_list list)
{
    char *decimal_str;
    int length;

    decimal_str = itoa(va_arg(list, int), 10);
    length = print((decimal_str != NULL) ? decimal_str : "NULL");

    return (length);
}
