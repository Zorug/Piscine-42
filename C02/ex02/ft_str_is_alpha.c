/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:53:24 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/09 20:53:27 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// A = 65 -> Z = 90
// a = 97 -> z = 122

int	ft_str_is_alpha(char *str)
{
	int	cnt;

	cnt = 0;
	if (!str)
	{
		return (1);
	}
	while (str[cnt])
	{
		if ((str[cnt] < 'A') || (str[cnt] > 'z'))
		{
			return (0);
		}
		else if ((str[cnt] > 'Z') && (str[cnt] < 'a'))
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
	char str[] = "Martamenezes";

	ft_str_is_alpha(str);
	printf("%d", ft_str_is_alpha(str));
}*/