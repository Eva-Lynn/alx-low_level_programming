#include "main.h"
#include <unistd.h>

/**
*'_putchar write char in c to stdout'
*
*return:On Success 1.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
