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
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')

	{

		count++;

	}

	while (count2 >= 0)

	{

		*(dest + count) = *(src + count2);

		if (*(src + count2) == '\0')

			break;
		count +

			count2++;

		{
			return (dest);

		}
