#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - returns pointer to 2 dimensional array of integers
*@width: insert value
*@height: insert value
*
*Return: pointer
*/

int **alloc_grid(int width, int height)
{
	int **gridarr;
	int x = 0, z;

	if (width == 0 || height == 0)
		return (NULL);
	gridarr = (int **) malloc(sizeof(int *) * height);
	if (gridarr != NULL)
	{
		for (; x < height; x++)
		{
			gridarr[x] = (int *) malloc(sizeof(int) * width);
			if (gridarr[x] != NULL)
			{
				for (z = 0; z < width; z++)
					gridarr[x][z] = 0;
			}
			else
			{
				while (x >= 0)
				{
					free(gridarr[x]);
					x--;
				}
				free(gridarr);
				return (NULL);
			}
		}
		return (gridarr);
	}
	else
	{
		return (NULL);
	}
}
