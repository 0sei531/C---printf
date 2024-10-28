#include "main.h"

/**
 * print_binary - Prints a number in base 2 (binary)
 * @list: List containing the number to print in binary
 *
 * Return: The length of the printed binary number
 */
int print_binary(va_list list)
{
    char *binary_str;
    int length;

    binary_str = itoa(va_arg(list, unsigned int), 2);
    length = print(binary_str);

    return (length);
}
