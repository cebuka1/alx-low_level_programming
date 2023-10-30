#include <stdio.h>
/**
 * main - print all arguments it receive
 * argc: The number of command-line argument
 * argv: An array of strings containing the command-line arguments.
 * Return: (0) when successful.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
