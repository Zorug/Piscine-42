unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;
	int j;

	i = 0;
	while (dest[i])
		i++;
	j = 0
	while (j<i)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\n';
	return ();
}

int main()
{
	char dest[10];
	char *src;
	unsigned int size;

	src = "exemplo de uma string muito longa!";

	ft_strlcpy(dest, src, sizeof(dest));
}