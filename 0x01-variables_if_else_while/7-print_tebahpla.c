#include <stdio.h>
/**
 * main - Entry point
 * Description: to print char in lower case in decending order
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);

}
