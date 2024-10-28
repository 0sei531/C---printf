#include "main.h"

/**
 * print_octal - Prints an unsigned integer in octal format.
 * @list: The list containing the number to print.
 *
 * Return: The length of the printed octal number.
 */
int print_octal(va_list list)
{
    char *octal_str;
    int length;

    octal_str = itoa(va_arg(list, unsigned int), 8);
    length = print((octal_str != NULL) ? octal_str : "NULL");

    return (length);
}
