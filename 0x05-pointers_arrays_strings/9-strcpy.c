#include "main.h"

/**
 * _strcpy - Used to copy a string
 * @dest: Destination value
 * @src: Source value
 *
 * Return: Destination
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}

	dest[a++] = '\0';

	return (dest);
}
