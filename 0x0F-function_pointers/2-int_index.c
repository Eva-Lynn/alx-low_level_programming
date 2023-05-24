#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @size: is the number of elements in the array
 * @cmp: is a pointer to the function to be used to compare values
 * @array: array
 * Return: if size <= 0, else return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
