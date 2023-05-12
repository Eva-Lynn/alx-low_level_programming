#include "main.h"
#include <unistd.h>

/**
 * _putchar.c - a function that writes the character c in stdout
 * @c: The character to be printed
 * Return: On Success 0
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
