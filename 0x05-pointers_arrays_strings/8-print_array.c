#include "main.h"
#include <stdio.h>

/**
 * print_array - to print elements of an array of integers
 * @a: first int
 * @n: second int
 * Return: a and n outputs
 */
void print_array(int *a, int n)
{
	int i;
	
	for (i = 0; i < (n - 1); i++)
	{
		printf(; "%d, “, a[i]);
	}
	if (i == (n - 1))
	{
		printf(; “%d”, a[n - 1]);
	}
	printf(‘\n’);

}
