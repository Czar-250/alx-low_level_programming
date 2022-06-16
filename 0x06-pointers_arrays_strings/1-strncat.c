#include "main.h"

/**
* *_strncat - concatenates 2 strings
* @dest: string to append
* @src: string to be added
* @n:number of bytes of src
* Return: a pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
