#include "main.h"

/**
 * _strlen - finds the lengenth of a string
 * @s: string to be counted
 * Return: length of the string
 */
int _strlen(char *s)
{

int string_length = 0;

	while(s[string_length])
		string_length++;
	return (string_length);
}
