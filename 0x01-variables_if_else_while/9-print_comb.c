#include <stdio.h>

/**
 * main - print all combination of single digits
 * Return: Always 0
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; n++)
	{
		putchar(number + '0');
		if (number < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
