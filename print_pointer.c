#include "main.h"
#include <stdio.h>

int _strcmp(const char *s1, const char *s2);

/**
 * print_pointer - Prints a pointer's address in hexadecimal format.
 * @list: The list containing the pointer to print.
 *
 * Return: The length of the printed pointer address.
 */
int print_pointer(va_list list)
{
    char *addr_str;
    int length;

    addr_str = itoa(va_arg(list, unsigned long int), 16);

    if (_strcmp(addr_str, "0") == 0)
        return (print("(nil)"));

    length = print("0x");

    if (_strcmp(addr_str, "-1") == 0)
        length += print("ffffffffffffffff");
    else
        length += print(addr_str);

    return (length);
}

/**
 * _strcmp - Compares two strings for equality.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A negative value if s1 < s2, a positive value if s1 > s2, 
 *         or 0 if they are equal.
 */
int _strcmp(const char *s1, const char *s2)
{
    int i;

    for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
    }

    return (0);
}
