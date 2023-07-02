#include "main.h"

/**
 * _strcat - concatenates two strings
 * char *_strcat-concatenateds two strings
 * @dest:points to the address of first string
 * @src:points to the source address of the first string
 * Return:a pointer to the return type dest
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;
	/*Find the end of the destination string*/
	while (*ptr != '\0')
	{
		ptr++;
	}

	/*copy the source string to the end of the destination string*/
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	/*Add a null byte to terminate the concatenated string*/

	*ptr = '\0';
return (dest);
}
