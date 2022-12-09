#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints alphabet in lower and upper case
 * Return: Always 0
 */

int main(void)
{

	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH)
		CH++;
	}

	putchar('\n');
	return (0);
}
