#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: memory area to be copied to
 * @src: memory area to be copied from
 * @n:number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
