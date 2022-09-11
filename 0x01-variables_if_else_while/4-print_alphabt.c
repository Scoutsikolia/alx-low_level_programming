/*
 *file 2-print_alphabet.c
 *
 */

#include <stdio.h>

/**
 *main - prints the alphabet in lowercase
 *followed by a new line
 *
 *Return: Always 0.
 *
 */

int main(void)

{
	int ch;

        for (ch = 'a'; ch <= 'z'; ch++)
	if (ch != 'e' && ch != 'q')
	putchar(ch);
	putchar('\n');



	return (0);

}
