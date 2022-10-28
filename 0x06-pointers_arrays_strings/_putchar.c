#include <main.h>
#include <unistd.h>


/**
 * _putchar - wriyes gthe character c to stdout
 * @c: the character tto print
 *
 * Return: On Success 1
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar (char c)

{
	return (write(1, &c, 1));
}
