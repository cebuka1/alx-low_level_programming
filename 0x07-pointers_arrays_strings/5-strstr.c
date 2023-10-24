#include "main.h"

/**
 * _strst - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The sunstring to be located.
 *
 * Return: if the sunstring is located - a pointer to yhe beginning
 *					of the located substring.
 * If the substring is not located - NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	int index:

		if (*needle == 0)
			return (haystack);
	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;

			} while (haystack[index] == needle[index]);
		}

		haystack++;
	}

	return ('\0');
}
