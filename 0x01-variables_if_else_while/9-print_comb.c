include<stdio.h>
/**
 * main - Prints all posssible combinations of single-digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
for (n = 0; n < 58; n++)
{
putchar(n);
if (n != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}