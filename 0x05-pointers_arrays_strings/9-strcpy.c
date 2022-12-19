#include "main.h"

/**
 * _strcpy - copiar el contenido de une a otra variable
 * @dest: This is destiny
 * @src: This is the copia
 *
 * Return: This return copy
 */
chatr *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
