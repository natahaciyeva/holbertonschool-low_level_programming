#include <stdlib.h>
/**
 * _strdup - returns a duplicate of the string str..
 * @str: pointer.
 * Return: pointer.
 */
char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *p;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	p = malloc(sizeof(char) * (i + 1));

	if (p == NULL)
		return (NULL);

	while (j < i)
	{
		p[j] = str[j];
		j++;
	}
	p[j] = '\0';
	return (p);
}
