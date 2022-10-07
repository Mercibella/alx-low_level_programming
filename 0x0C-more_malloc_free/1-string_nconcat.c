#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - a function that concatenates two strings
* @s1: the first string
* @s2: the second string
* @n: the number of bytes of s2 to be concatenated
* Return: returns a pointer to a new string which contains
* s1 followed by the first n bytes of s2, and a=the null-terminator
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, c;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	c = nmemb * size;

	ptr = malloc(c);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < c; i++)
		ptr[i] = 0;

	return ((void *) ptr);
}
