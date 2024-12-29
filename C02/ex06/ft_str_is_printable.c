/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:26:00 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/10 13:26:01 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	cnt;

	cnt = 0;
	if (!str[cnt])
	{
		return (1);
	}
	while (str[cnt])
	{
		if ((str[cnt] < 32) || (str[cnt] > 127))
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
	char str[] = "az€";

	//ft_str_is_printable(str);

	printf("%d", ft_str_is_printable(str));
	return (0);
}
*/