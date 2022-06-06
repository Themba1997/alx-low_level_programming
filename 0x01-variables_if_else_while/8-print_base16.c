#include <stdio.h>

/**
 * Description: main - Prints a hexadecimal string
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char c = '0';
char C = 'a';
while (c <= '9')
{
putchar(c);
c++;
}
while (C <= 'f')
{
putchar(C);
C++;
}
putchar('\n');
return (0);
}
