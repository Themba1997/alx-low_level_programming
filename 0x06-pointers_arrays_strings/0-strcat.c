#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates 2 strings
 *
 * @dest: destination string
 *
 * @src: source string
 *
 * Return: return a pointer to string dest
 *
 */

char *_strcat(char *dest, char *src)

{
	int a = 0;
	int i = 0;

	while (dest[a])

	{
		a++;

	}

	while (src[i] != 0)

	{
		dest[a] = src[i];
		i++;
		a++;

	}

	dest[a] = '\0';
	return (dest);

}
