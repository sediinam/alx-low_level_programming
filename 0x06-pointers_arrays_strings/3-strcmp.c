/**
 * _strcmp - compares 2 strings and stops at the first byte that is different.
 * @s1: string to be compared
 * @s2: string to compare by
 * Return: the difference between the first input that are not the same
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
