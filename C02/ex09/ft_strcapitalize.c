#include <stdio.h>
#include <unistd.h>

// A(65)  a(97)
int verify_spaces_and_chars(char c);

void get_word(char *str, int pos)
{
	int i;

	i = pos++;

	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;
	while(str[++i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if (verify_spaces_and_chars(str[i]) == 1)
			return ;
	}
}

int verify_spaces_and_chars(char c)
{
	if (c >= '0' && c <= '9')
		return (0);
	else if (c >= 'A' && c <= 'Z')
		return (0);
	else if (c >= 'a' && c <= 'z')
		return (0);
	return (1);
}

char *ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (verify_spaces_and_chars(str[i]) == 0)
	{
		printf("Entrou");
		get_word(str, i);
	}
	while (str[++i])
		if (verify_spaces_and_chars(str[i-1]) == 1 && verify_spaces_and_chars(str[i]) == 0)
			get_word(str, i);
	printf("%s", str);
	return (str);
}

int main(int argc, char **argv)
{
	char *str;

	if (argc == 2)
	{
		str = argv[1];
		ft_strcapitalize(str);
	}
}