#include "main.h"
#include <stdarg.h>

/**
 * handler - Controls the formatting and output of the format string
 * @str: Format string
 * @list: List of arguments
 *
 * Return: Total number of characters printed
 */
int handler(const char *str, va_list list)
{
    int total_size = 0, i, formatted_size;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '%')
        {
            formatted_size = percent_handler(str, list, &i);
            if (formatted_size == -1)
                return (-1);

            total_size += formatted_size;
        }
        else
        {
            _putchar(str[i]);
            total_size++;
        }
    }

    return (total_size);
}

/**
 * percent_handler - Handles format specifiers after the '%' character
 * @str: Format string
 * @list: List of arguments
 * @i: Current index in the format string
 *
 * Return: Number of characters printed for the specific format specifier
 */
int percent_handler(const char *str, va_list list, int *i)
{
    int j, num_formats;
    int char_count = 0;
    format formats[] = {
        {'s', print_string}, {'c', print_char},
        {'d', print_integer}, {'i', print_integer},
        {'b', print_binary}, {'u', print_unsigned},
        {'o', print_octal}, {'x', print_hexadecimal_low},
        {'X', print_hexadecimal_upp}, {'p', print_pointer},
        {'r', print_rev_string}, {'R', print_rot}
    };

    (*i)++;

    if (str[*i] == '\0')
        return (-1);

    if (str[*i] == '%')
    {
        _putchar('%');
        return (1);
    }

    num_formats = sizeof(formats) / sizeof(formats[0]);
    for (j = 0; j < num_formats; j++)
    {
        if (str[*i] == formats[j].type)
        {
            char_count = formats[j].f(list);
            return (char_count);
        }
    }

    _putchar('%');
    _putchar(str[*i]);

    return (2);
}
