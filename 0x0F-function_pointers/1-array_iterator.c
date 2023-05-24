#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a func given as a parmtr on each element.
 * @action:  is a pointer to the function you need to use
 * @size: is the size of the array
 * @array: aray
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
