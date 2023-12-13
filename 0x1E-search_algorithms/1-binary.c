#include "search_algos.h"

/**
 * binary_search - Performs a binary search on a sorted array of integers.
 *
 * @array: Pointer to the first element of the sorted integer array to search.
 * @size: Size of the array (number of elements).
 * @value: The integer value to search for.
 *
 * Returns:
 *   - The index of the value in the array (if found), or
 *   - -1 if the value is not found or the array pointer is null.
 *
 * Prints the current search range
 * (array elements being searched) at each iteration.
 *
 * Assumes:
 *   - The array is sorted in ascending order.
 *   - The target value appears only once in the array.
 */

int binary_search(int *array, size_t size, int value)
{
	int low;
	int high;
	int mid;
	int i;

	if (!array)
	{
		return (-1);
	}

	low = 0;
	high = (int)size - 1;

	while (low <= high)
	{
		mid = (low + high) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; ++i)
		{
			printf("%d, ", array[i]);
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}

		if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}

	return (-1);
}
