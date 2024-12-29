/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:42:16 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/10 12:42:18 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// a = 97 z = 122

int	ft_str_is_lowercase(char *str)
{
	int	cnt;

	cnt = 0;
	if (!str[cnt])
	{
		return (1);
	}
	while (str[cnt])
	{
		if ((str[cnt] < 97) || (str[cnt] > 122))
		{
			return (0);
		}
		cnt++;
	}
	return (1);
}

/*
int main()
{
	char str[] = "\0";

	//ft_str_is_lowercase(str);

	printf("%d", ft_str_is_lowercase(str));
	return (0);
}*/