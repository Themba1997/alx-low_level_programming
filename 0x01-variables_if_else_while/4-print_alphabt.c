#include <stdio.h>

/**
 * Description: main - Prints some letters of alphabet
 *
 * Return: Always (Success)
 */

int main(void)
{
char c = 'a';
while (c <= 'z')
{
if (c != 'e' && c != 'q')
{
putchar(c);
}
c++;
}
putchar('\n');
return (0);
}
