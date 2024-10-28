#include "main.h"

/**
 * _strlen - Calculates the length of a string.
 * @str: The string to measure.
 *
 * Return: The length of the string.
 */
int _strlen(const char *str)
{
    int length;

    for (length = 0; str[length] != '\0'; length++)
        ;

    return (length);
}

/**
 * print - Prints a string character by character.
 * @str: The string to print.
 *
 * Return: The length of the printed string.
 */
int print(char *str)
{
    int length;

    for (length = 0; str[length] != '\0'; length++)
        _putchar(str[length]);

    return (length);
}
