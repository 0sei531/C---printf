#include "main.h"

/**
 * print_char - Prints a character from the va_list.
 * @list: The list containing the character to print.
 *
 * Return: Always returns 1 (indicating one character was printed).
 */
int print_char(va_list list)
{
    int character;

    character = va_arg(list, int);
    _putchar(character);

    return (1);
}
