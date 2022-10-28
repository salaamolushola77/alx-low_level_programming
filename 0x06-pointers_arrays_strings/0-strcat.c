#include <main.h>

/**
 * strcat - Concatenates the string pointed to by @src, including the terminant
 *	    null byte, to the end of the string pointed to by @dest.
 *@dest: points to the string to be concatenated
 *@src: the source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src);
{
	int index = 0, dest_len = 0;

	while (dest[indx++])
		dest len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
