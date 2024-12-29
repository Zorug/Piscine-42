#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

//a(97) z(122) | A(65) Z(90)

int count(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void ft_strcpy(char **dest, char *src)
{
	int i;
	char *p;

	p = malloc(count(src) + 1);

	i = 0;
	while(src[i])
	{
		p[i] = src[i];
		i++;
	}

	*dest = p;
	//return (dest);
}

void go_char_by_char(char **fkpt)
{
	printf("%s\n",*fkpt);
	printf("%c\n",**fkpt);
	printf("%c\n",*(++*fkpt));
	printf("%c\n",*(++*fkpt));
}

int main(int argc, char **argv)
{
	char *str = argv[1];
	char *original;
	char **ptr_orign;
	char **fkpt;


	ptr_orign = &original;

	ft_strcpy(ptr_orign, str);

	fkpt = &str;

	if (argc == 2)
	{
		go_char_by_char(fkpt);
	}

	printf("%s\n" ,str);
	printf("%s\n" ,original);

	write (1, "\n", 1);
}