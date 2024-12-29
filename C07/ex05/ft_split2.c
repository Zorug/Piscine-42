#include <stdlib.h>
#include <stdio.h>

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

char	**ft_split(char *str, char *charset)
{
	int i;
	int j;
	int k;

	
}

int	main()
{
	char *str = "super*string#for-test_exemple";
	char *charset = "*#-_";

	ft_split(str, charset);
}