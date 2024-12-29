/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:19:57 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/21 16:21:21 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	g_x = 0;
int	g_y;

int	size_or_base_errors(char *str, char condition)
{
	if (condition == 's')
	{
		g_x = 0;
		while (str[g_x])
			g_x++;
		return (g_x);
	}
	else if (condition == 'e')
	{
		if (str[0] == '\0' || size_or_base_errors(str, 's') == 1)
			return (1);
		g_x = -1;
		while (str[++g_x])
		{
			if (str[g_x] == '+' || str[g_x] == '-')
				return (1);
			g_y = g_x;
			while (str[++g_y])
				if (str[g_x] == str[g_y])
					return (1);
		}
		return (0);
	}
	return (2);
}

int	position_or_existence_c(char c, char *base, char condition)
{
	int	pos;

	pos = 0;
	if (condition == 'f')
	{
		while (base[pos] != c)
			pos++;
		return (pos);
	}
	else if (condition == 'e')
	{
		while (base[pos])
		{
			if (base[pos] == c)
				return (0);
			pos++;
		}
		return (1);
	}
	else
		return (2);
}

int	verify_true(char c)
{
	if (c == ' ' || c == '\f' || c == '\n')
		return (1);
	else if (c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

int	convert_to_int(char *str, int j, int k, char *base)
{
	int	converted_char;
	int	g_multiplier;
	int	g_nbr;

	g_multiplier = 1;
	g_nbr = 0;
	while (--j >= k)
	{
		converted_char = position_or_existence_c(str[j], base, 'f');
		g_nbr = g_nbr + converted_char * g_multiplier;
		g_multiplier = g_multiplier * size_or_base_errors(base, 's');
	}
	return (g_nbr);
}

int	ft_atoi_base(char *str, char *base)
{
	int	j;
	int	k;
	int	g_sign;
	int	g_nbr;

	g_sign = 1;
	if (size_or_base_errors(base, 'e') == 1)
		return (0);
	j = 0;
	while (verify_true(str[j]) == 1)
		j++;
	while (str[j] == '-' || str[j] == '+')
	{
		if (str[j] == '-')
			g_sign = g_sign * (-1);
		j++;
	}
	k = j;
	while (position_or_existence_c(str[j], base, 'e') == 0)
		j++;
	g_nbr = convert_to_int(str, j, k, base);
	return (g_nbr * g_sign);
}

/*int main()
{
	char *str;
	char *base;

	str = "   -1011001";
	//str = "  -FF";
	//base = "0123456789";
	base = "01";
	//base = "0123456789ABCDEF";
	//ft_atoi_base(str, base);
	printf("%d", ft_atoi_base(str, base));
}

*/