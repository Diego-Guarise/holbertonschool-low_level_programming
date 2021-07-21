#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function executes a function on array
 * @array: pointer to array
 * @size: number elements in array
 * @action: pointer to function
 * Return: nothing
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
	while (array[i] != 'NULL')
		i++;
		action(array[i]);
}
