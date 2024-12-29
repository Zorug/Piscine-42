/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:13:16 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/17 14:13:18 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	strcnt(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] && str2[i])
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (str1[i] - str2[i]);
}

void	repoint(char **argv, int i)
{
	char	*temp;

	temp = argv[i];
	argv[i] = argv[i + 1];
	argv[i + 1] = temp;
}

void	write_word(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	if (argc > 1)
	{
		j = 0;
		while (++j < argc)
		{
			i = 0;
			while (++i < argc - 1)
				if (ft_strcmp(argv[i], argv[i + 1]) > 0)
					repoint(argv, i);
		}
		i = 0;
		while (++i < argc)
			write_word(argv[i]);
	}
}

/*
       strcmp() returns an integer indicating the result of the comparison, 
       as follows:

       • 0, if the s1 and s2 are equal;

       • a negative value if s1 is less than s2; --> negativo está em ordem alfab

       • a positive value if s1 is greater than s2
*/