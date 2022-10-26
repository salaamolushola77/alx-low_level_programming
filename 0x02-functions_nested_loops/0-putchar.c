#include "main.h"

/**
 * main - Prints Holbeerton as a message
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int count, sz;

	sz = sizeof(str)/sizeof(int);
	for (count = o; count < sz; count++)
	{
		_putchar(str[count]);
	}
	_putchar("\n");
	return (0);
}
