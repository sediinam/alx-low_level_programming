/**
  * _strncat - concatenates or joines two strings
  * @dest: pointer to the destionation string
  * @src: pointer to the source string
  * @n: number of bytes to be printed
  * Return: pointer to the resulting string dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	for (j = 0; dest[j] != '\0'; j++)
		;
	while (src[i] != '\0' && i < n)
	{
		dest[j + i] = src[i];
		i++;
	}
	return (dest);
}
