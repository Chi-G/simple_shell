#include"shell.h"

/**
 * _strlen - it returns the length of a string
 * @s: this is the string whose length to check
 *
 * Return: integer length of the string
 */
int _strlen(char *s)
{
	int i = 0;
	if (!s)
		return (0);
	
	while (*s++)
		i++;
	return (i);
}

/**
 * _strcmp - it performs lexicogarphic comparison of two strange.
 * @s1: this the first strang
 * @s2: this the second strang
 *
 * Return: negative if s1 < s2, positive if s1 > s2, zero if s1 == s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < s2 ? -1 : 1);
}

/**
 * starts_with - checks if needle starts with haystack
 * @haystack: the string to search
 * @needle: this the substring to find
 *
 * Return: tha address of the char of haystack or NULL
 */

char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *hatstack++)
			return (NULL);
	return ((char*)haystack);
}

/**
 * _strcat - concatenates two strings
 * @dest: this the destination of buffer
 * @src: This is the source of the buffer
 *
 * return: the ponter to destination buffer
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}
