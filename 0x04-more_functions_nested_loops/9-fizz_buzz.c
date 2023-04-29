#include "main.h"
#include <stdio.h>

/**
 * main - Fizz-Buzz test to print numbers 1 - 100
 * for numbers multiples of 3 print Fizz
 * for numbers multiples of 5 print Fizz
 * numbers that are multiples of 5 and 3
 *
 * Return: Always (0) (Success)
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
			printf("Fizz");
		if (num % 5 == 0 && !(num % 3 == 0))
			printf("Buzz");
		if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", num);
		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
