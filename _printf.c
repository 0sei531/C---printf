#include "main.h"
#include <stdarg.h>

/**
 * _printf - Produces output according to a format
 * @format: A character string with format specifiers
 *
 * Return: The number of characters printed (excluding
 * the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
    int printed_chars;
    va_list args;

    if (format == NULL)
        return (-1);

    va_start(args, format);
    printed_chars = handler(format, args);
    va_end(args);

    _putchar(-1);

    return (printed_chars);
}
