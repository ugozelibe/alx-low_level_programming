#include <stdio.h>
/**
 * main - print the numbers zero to nine
 *
 * Description: using the main function
 * this program prints numbers
 * Return: 0
 */
int main(void)
{
char n;
for (n = '0' ; n <= '9' ; n++)
{
	putchar(n);
}
putchar('\n');
return (0);
}
