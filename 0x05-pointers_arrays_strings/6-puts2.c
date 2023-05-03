#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string to be printed
 */
void puts2(char *str)
{
	int longi = 0;
	int x = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	x = longi - 1;
	for (o = 0; o <= x; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
