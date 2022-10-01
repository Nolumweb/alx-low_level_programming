
KingTune
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
alx-low_level_programming/0x09-static_libraries/sources/0-strcat.c
@KingTune
KingTune Static libraries
 1 contributor
27 lines (23 sloc)  415 Bytes
#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int destLen = 0;
	int srcLen = 0;

	while (dest[destLen] != '\0')
		destLen++;

	while (src[srcLen])
	{
		dest[destLen] = src[srcLen];
		srcLen++;
		destLen++;
	}
	dest[destLen] = '\0';

	return (dest);
}
