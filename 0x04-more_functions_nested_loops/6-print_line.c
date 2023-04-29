#include "main.h"

/**
 * print_line - to draw a straight line
 *@n: is the number of times to be drawn
 *
 */
void print_line(int n)
{
	int lnchr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnchr = 1; lnchr <= n; lnchr++)
			_putchar('_');
		_putchar('\n');
	}
}
