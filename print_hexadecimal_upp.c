#include "main.h"

int is_lowercase(char c);
char *string_to_upper(char *s);

/**
 * print_hexadecimal_upp - Prints a number in uppercase hexadecimal format.
 * @list: The list containing the number to print.
 *
 * Return: The length of the printed hexadecimal number.
 */
int print_hexadecimal_upp(va_list list)
{
    char *hex_str;
    int length;

    hex_str = itoa(va_arg(list, unsigned int), 16);
    hex_str = string_to_upper(hex_str);

    length = print((hex_str != NULL) ? hex_str : "NULL");

    return (length);
}

/**
 * is_lowercase - Checks if a character is lowercase.
 * @c: The character to check.
 *
 * Return: 1 if the character is lowercase, 0 otherwise.
 */
int is_lowercase(char c)
{
    return (c >= 'a' && c <= 'z');
}

/**
 * string_to_upper - Converts a string to uppercase.
 * @s: The string to convert.
 *
 * Return: A pointer to the uppercase string.
 */
char *string_to_upper(char *s)
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (is_lowercase(s[i]))
        {
            s[i] -= 32;  // Convert lowercase to uppercase
        }
    }

    return (s);
}
