include "main.h"
/**
 * *_strncat - concatenates two strings with n bytes
 * @dest: destination string to be concatenated
 * @src:source string be appended
 * Return:a ponter is returned to dest
 */

char *_strncat(char *dest, const char *src, int n)
{
	char *ptr = dest;

	/* Move the pointer to the end of the destination string*/
	while (*ptr != '\0')
	{
	ptr++;
	}

	/* Copy characters from src to dest, up to n bytes*/
	while (n > 0)
	{
	*ptr = *src;
	ptr++;
	src++;
	n--;

	if (*(src - 1) == '\0')
	break;
	}

	/* Add a terminating null byte */
	*ptr = '\0';

	return (dest);
}
