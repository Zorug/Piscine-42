#include <stdlib.h>
#include <stdio.h>

int g_charset_number;

int	is_in_charset(char *charset, char c)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int *get_charset_positions(char *charset, char c)
{
	int *p;
	int i;
	int j;

	i = -1;
	j = 0;
	while (charset[++i])
		if (c == charset[i])
			j++;
	p = malloc(sizeof(int)*j);
	i = -1;
	j = 0;
	while(charset[++i])
		if (c == charset[i])
		{
			p[i] = j;
			j++;
			g_charset_number++;
		}
	return (p);
}

char	**ft_split(char *str, char *charset)
{
	char **arr;
	int *p;

	g_charset_number = 0

	if (is_in_charset(charset, c) == 1); //found
	{
		p = get_charset_positions(charset, c);
		**arr = malloc(sizeof(char*+1)*g_charset_number)
	}

	//arr = (int**)malloc(n_words + 1 * sizeof(char));

	return ();
}

int	main()
{
	char *str = "super*string#for-test_exemple";
	char *charset = "*#-_";

	ft_split(str, charset);
}