#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
int a, h, leng;

leng = 0;

for (a = 0; str[a] != '\0'; a++)
{
leng++;
}
h = (leng / 2);

if ((leng % 2) == 1)
{
h = ((leng + 1) / 2);
}
for (a = h; str[a] != '\0'; a++)
{
	_putchar(str[a]);
}
_putchar('\n');
}
