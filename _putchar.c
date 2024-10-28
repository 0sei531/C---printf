#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success, 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    return (buffer(c));
}

/**
 * buffer - Saves the character in a buffer and flushes it to stdout
 *          when full or when flushing is triggered.
 * @c: The character to buffer or -1 to flush the buffer
 *
 * Return: 1 on success
 */
int buffer(char c)
{
    static char buffering[1024];
    static int i = 0;

    if (c == -1 || i == 1024)
    {
        write(1, buffering, i);
        i = 0;
    }

    if (c != -1)
        buffering[i++] = c;

    return (1);
}
