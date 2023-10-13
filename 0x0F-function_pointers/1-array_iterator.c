#include "function_pointers.h"
/**
 * array_iterator - Executes an action on each element of an array
 * @array: Array of integers
 * @size: size of the array
 * @action: pointer to the function to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
