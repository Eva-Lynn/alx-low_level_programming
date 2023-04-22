#include <stdio.h>
/**
 * main - Entry point
 * Description: to print char in lower and upper case
 * Return: Always 0 (Success)
 */
int main(void)
{
        int n = 97;
	int m = 65;

        while (n < 123)
        {
                putchar(n);
                n++;
        }
	while (m <= 90)
	{
		putchar(m);
		m++;
	}
        putchar('\n');
        return (0);
}
