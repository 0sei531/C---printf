#include "main.h"

/**
 * itoa - Converts an integer to a string in a specified base
 * @num: The integer to convert
 * @base: The numerical base for conversion (e.g., 10 for decimal)
 *
 * Return: A pointer to the resulting string
 */
char *itoa(long int num, int base)
{
    static char *digits = "0123456789abcdef";
    static char buffer[50];
    char sign = 0;
    char *ptr;
    unsigned long n = num;

    if (num < 0)
    {
        n = -num;
        sign = '-';
    }

    ptr = &buffer[49];
    *ptr = '\0';

    do {
        *--ptr = digits[n % base];
        n /= base;
    } while (n != 0);

    if (sign)
        *--ptr = sign;

    return (ptr);
}
