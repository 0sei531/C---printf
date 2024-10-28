#include "main.h"

/**
 * print_unsigned - Prints an unsigned integer.
 * @list: The list of arguments containing the number to print.
 *
 * Return: The length of the printed number.
 */
int print_unsigned(va_list list)
{
    char *p_buff;
    int length;

    p_buff = itoa(va_arg(list, unsigned int), 10);

    length = print((p_buff != NULL) ? p_buff : "NULL");

    return (length);
}
