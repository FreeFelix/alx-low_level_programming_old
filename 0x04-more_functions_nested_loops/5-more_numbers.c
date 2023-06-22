#include "main.h"

/**
 * more_numbers - print more numbers
 *
 * Return (void)
 */
void more_numbers(void)
{
int i, j, First = 0, last = 0;
for (i = 0; i <= 10; i++)
{
while (First <= last)
{
	_putchar(start > 9 ? (First / 10) + '0' : First + '0');
	if (First > 9)
		_putchar((First % 10) + '0');
	First++;
}
First = 0;
putchar('\n');
}
}
