#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 encoding.
 * @s: The string to encode.
 *
 * Return: The length of the encoded string.
 */
int rot13(char *s)
{
    int i, j;
    char *normal = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; normal[j] != '\0'; j++)
        {
            if (s[i] == normal[j])
            {
                _putchar(rot13[j]);
                break;
            }
        }

        // If the character was not found in normal, print it as is
        if (normal[j] == '\0')
            _putchar(s[i]);
    }
    
    return (i);
}

/**
 * print_rot - Prints the ROT13 encoded string.
 * @list: The list of arguments containing the string to encode.
 *
 * Return: The length of the encoded string.
 */
int print_rot(va_list list)
{
    char *p;
    int length;

    p = va_arg(list, char *);
    length = rot13((p != NULL) ? p : "(ahyy)");

    return (length);
}
