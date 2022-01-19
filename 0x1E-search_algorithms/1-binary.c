#include "search_algos.h"

/**
 * binary_search -  Write a function that searches for a value in a 
 * sorted array of integers using the Binary search algorithm
 * @array: pointer to array
 * @size: size array
 * @value: number that we will found
 */

int binary_search(int *array, size_t size, int value)
{
    size_t low = 0, mid, high = size - 1, tmp;

    if (!array)
        return (-1);

    while (low <= high)
    {
        mid = low + (high - low) / 2;
        
        for (tmp = low; tmp < high; tmp++)
			printf("%d, ", array[tmp]);
		if (tmp == high)
			printf("%d\n", array[tmp]);
        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
            low = mid + 1;
        else if (array[mid] > value)
            high = mid - 1;
    }

    return (-1);
}