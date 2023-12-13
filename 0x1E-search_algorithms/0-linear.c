#include "search_algos.h"

/**
 * linear_search - Searches for a value in an integer array using linear search
 * @array: Pointer to the first element of the integer array to search
 * @size: Size of the array (number of elements)
 * @value: The integer value to search for
 *
 * Return:
 *   - The index of the value in the array (if found)
 *   - -1 if the value is not found or the array pointer is null
 *
 * Prints the value checked before each comparison for demonstration purposes.
 *
 * Time Complexity: O(n) (worst-case)
 * Space Complexity: O(1)
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;
	/* Checking for null array */
	if (!array)
	{
		return (-1);
	}

	/* Loop thorugh each element in the array */
	for (i = 0; i < size; ++i)
	{
		/* Print the checked value */
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);

		/* Check if the element matches the target value */
		if (array[i] == value)
		{
			/* Find the value, return its index */
			return ((int)i);
		}
	}

	/* if the value is not found */
	return (-1);
}
