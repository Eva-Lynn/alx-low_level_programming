#include "main.h"

/**
 * _strlen -  a function that returns the length of a string.
 * @s: char to check value
 * Return: 0
 */
int _strlen(char *s)
{
	int n = 0;

	for (; *s++;)
		n++;
	return (n);
}
