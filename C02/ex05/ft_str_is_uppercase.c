/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:50:53 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/10 12:50:55 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	cnt;

	cnt = 0;
	if (!str[cnt])
	{
		return (1);
	}
	while (str[cnt])
	{
		if ((str[cnt] < 65) || (str[cnt] > 90))
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
	char str[] = "az";

	//ft_str_is_uppercase(str);

	printf("%d", ft_str_is_uppercase(str));
	return (0);
}*/