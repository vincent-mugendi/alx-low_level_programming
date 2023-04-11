#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **pjoy;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	pjoy = malloc(sizeof(int *) * height);

	if (pjoy == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		pjoy[x] = malloc(sizeof(int) * width);

		if (pjoy[x] == NULL)
		{
			for (; x >= 0; x--)
				free(pjoy[x]);

			free(pjoy);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			pjoy[x][y] = 0;
	}

	return (pjoy);
}
