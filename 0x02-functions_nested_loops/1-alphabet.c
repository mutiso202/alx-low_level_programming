#include "main.h"

/**
 * main - Entry point
 * Description -pront_alphabet prints all alphabet in lowercase
 * Return: Always 0
  
 */

void print_alphabet(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	_putchar(letter);
	_putchar('\n');
}

