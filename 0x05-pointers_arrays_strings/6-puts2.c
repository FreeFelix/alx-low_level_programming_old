#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int length = 0;
	int i = 0;
	char *k = str;
	int e;

	while (*k != '\0')
	{
		k++;
		length++;
	}
	i = length - 1;
	for (e = 0; e <= i; e++)
	{
		if (e % 2 == 0)
		{
			_putchar(str[e]);
		}
	}
	_putchar('\n');
}
