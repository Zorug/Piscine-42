/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:07:39 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/10 12:07:41 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	cnt;

	cnt = 0;
	if (!str[cnt])
	{
		return (1);
	}
	while (str[cnt])
	{
		if ((str[cnt] < 48) || (str[cnt] > 57))
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
	char str[] = "0068754g";

	//ft_str_is_numeric(str);

	printf("%d", ft_str_is_numeric(str));
	return (0);
}*/