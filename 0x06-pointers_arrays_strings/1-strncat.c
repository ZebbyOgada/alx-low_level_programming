include "main.h"
/**
 * *_strncat - concatenates two strings with n bytes
 * @dest: destination string to be concatenated
 * @src:source string byte to be appended
 * n:number of bytes
 * Return: returns a pointer dest
 */

char *_strncat(char *dest, const char *src, int n) 
{
    char *ptr = dest;

    /* Move the pointer to the end of the destination string */
    while (*ptr != '\0') 
    {
        ptr++;
    }

    /* Append characters from src to dest, up to n bytes */
    while (*src != '\0' && n > 0) 
    {
        *ptr = *src;
        ptr++;
        src++;
        n--;
    }

    /* Add a terminating null byte */
    *ptr = '\0';

    return (dest);
}
