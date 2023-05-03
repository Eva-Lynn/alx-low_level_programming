#include "main.h"

/**
 * _puts -  prints a string to stdout, followed by a new line
 * @str: check for string
 * Return: the lenght of the string
 */
void _puts(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
			n++;
	}
	_putchar('\n');
}
