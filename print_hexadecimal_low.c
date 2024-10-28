#include "main.h"

/**
 * print_hexadecimal_low - Prints a number in lowercase hexadecimal format.
 * @list: The list containing the number to print.
 *
 * Return: The length of the printed hexadecimal number.
 */
int print_hexadecimal_low(va_list list)
{
    char *hex_str;
    int length;

    hex_str = itoa(va_arg(list, unsigned int), 16);
    length = print((hex_str != NULL) ? hex_str : "NULL");

    return (length);
}
