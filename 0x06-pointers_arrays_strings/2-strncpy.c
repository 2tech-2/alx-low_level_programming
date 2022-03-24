#include "main.h"

/**
<<<<<<< HEAD
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of byte to copy
 *
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
=======
* _strncpy - copies a string
* @dest: destination string
* @src: source string
* @n: number of bytes to copy
*
* Return: pointer to the resulting string
*/
char *_strncpy(char *dest, char *src, int n)
{
    int i;

    i = 0;

    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }

    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }

    return (dest);
}
>>>>>>> 1c20e5121f101ad45ed98f1ffbb2b67c320b5cdc
