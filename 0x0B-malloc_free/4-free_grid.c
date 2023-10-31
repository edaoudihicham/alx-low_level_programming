#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **pointer;
	int i, j;

	if (width <= 0 || height <= 0)/* A */
		return (NULL);
	if (width > INT_MAX || height > INT_MAX)
		return (NULL);
	pointer = malloc(height * sizeof(int *));/* D */
	if (pointer == NULL)
	{
		free(pointer);
		return (NULL);
	}
	for (i = 0; i < height; i++)/* E */
	{
		pointer[i] = malloc(width * sizeof(int));
		if (pointer[i] == NULL)
		{
			for ( ; i >= 0; i--)
				free(pointer[i]);
			free(pointer);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)/* F */
		for (j = 0; j < width; j++)
			pointer[i][j] = 0;
	return (pointer);/* G */
}
