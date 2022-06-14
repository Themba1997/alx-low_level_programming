#include "main.h"
#include<stdio.h>

/**
 * print_array - prints n elements of an array of integers
 *
 * @a: array of integers
 *
 * @n: number of elements of the array to be printed
 *
 */

void print_array(int *a, int n)

{
	int i = 0;

	while (i < n)

	{
		printf("%d", a[i]);
		i++;

		if (i != (n - 1))

		{
			printf(", ");
		}

	}

	printf("\n");

}
