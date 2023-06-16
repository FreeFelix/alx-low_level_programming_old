#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{ 
int q,p;
for (q = 0; i < 100; i++)
{
for (p = 0; p < 100; p++)
{
if (q < p)
{
putchar((q / 10) + 48);
putchar((q % 10) + 48);
putchar (' ');
putchar((p / 10) + 48);
putchar((p % 10) + 48);
if (q != 98 || p != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
