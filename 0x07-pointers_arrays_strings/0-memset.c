#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @n: first byte of the memory area pointed to
 * @s: The memory area
 * @b:The Value
 * Return: array with new byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
