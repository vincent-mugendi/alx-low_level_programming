

int linear_search(int *array, size_t size, int value)
{
	size_t i;
	/* Checking for null array */
	if (!array)
	{
		return -1;
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
			return (int)i;
		}
	}

	/* if the value is not found */
	return (-1);
}
		
