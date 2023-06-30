/**
  * _strncpy - copies a string
  * @dest: destination of the pointer to the string
  * @src: source of the pointer to the string to be copied
  * @n: number of bytes
  * Return: Pointer to the destination string.
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
