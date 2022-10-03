#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory containing a copy of
 * the string given as parameter
 * @str: pointer to string being duplicated.
 *
 * Return: returns NULL if str is NULL
 * on success pointer to duplicated string
 * NULL if memory was insufficient
 */

char *_strdup(char *str)
{
	char *newstr;
	unsigned int len, i;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	newstr = malloc(sizeof(char) * (len + 1));

	if (newstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		newstr[i] = str[i];
	}
	newstr[len] = '\0';
	return (newstr);
}
