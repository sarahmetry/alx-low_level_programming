/**
 * _strlen - lenght of string
 * @s: string
 * Return: int
 */
int _strlen(char *s)
{
	int L = 0;

	while (s[L] != '\0')
	{
		L++;
	}
	return (L);
}

