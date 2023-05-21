#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum array
 * @max: maximum array
 * Return: []
 */
int *array_range(int min, int max)
{
	int *arr, i = 0, m = min;

	if (min > max)
		return (0);
	arr = malloc((min - max + 1) * sizeof(int));

	if (!arr)
		return (0);
	while (i <= max - min)
		arr[i++] = m++;
	return (arr);
}
