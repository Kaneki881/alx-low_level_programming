#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	size_t len;
	char *c;

	if (str == NULL)
		return (NULL);

	len = strlen(str) + 1;
	c = malloc(len * sizeof(char));

	if (c == NULL)
		return (NULL); /* Failed to allocate memory */

	strcpy(c, str);

	return (c);
}
