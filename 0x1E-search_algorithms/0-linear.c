#include "search_algos.h"

/**
 * linear_search - find the number
 * @array: pointer to array
 * @size: size array
 * @value: number that we will found
 * Return: first index where value is located or -1 if the value is not located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t number;

	if (!array)
		return (-1);

	for (number = 0; number < size; number++)
	{
		printf("Value checked array[%ld] = [%d]\n", number, array[number]);
		if (value == array[number])
			return (number);
	}
	return (-1);
}
