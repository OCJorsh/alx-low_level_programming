#include "main.h"

/**
 * *_strcat - concentrate n bytes of two strings
 * using at most n bytes from src
 * @dest: pointer destination
 * @src: pointer of bytes
 * @n: number of bytes to recieve
 * Return: void
 */

char *_strncpy(char *dest, char *src, int n);
{
	int dest_len, i;

	for (dest_len = 0; dest[dest_len] != '\0';)
		dest_len++;

	for (i = 0; i < n && src[i] != '\0';)
		i++;
	dest[dest_len + i] = src[i];

	/*should end with a end of string char*/
	dest[dest_len + i] = '\0';

	return (dest);
}
