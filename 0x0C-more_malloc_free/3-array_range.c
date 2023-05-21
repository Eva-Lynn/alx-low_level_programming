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
	int *array, i = 0, m = min;

	if (min > max)
		return (0);
	array = malloc((min - max + 1) * sizeof(int));

	if (!array)
		return (0);
	while (i <= max - min)
		array[i++] = m++;
	return (array);
}
