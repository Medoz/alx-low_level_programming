#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int n, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	n = ci = 0;
	while (s1[n] != '\0')
		n++;
	while (s2[ci] != '\0')
		ci++;
	conct = malloc(sizeof(char) * (n + ci + 1));

	if (conct == NULL)
		return (NULL);
	n = ci = 0;
	while (s1[n] != '\0')
	{
		conct[n] = s1[n];
		n++;
	}

	while (s2[ci] != '\0')
	{
		conct[n] = s2[ci];
		n++, ci++;
	}
	conct[n] = '\0';
	return (conct);
}
