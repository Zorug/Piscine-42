/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 13:58:05 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/14 13:58:06 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(char *str);

int	verify_true(char c)
{
	if (c == ' ' || c == '\f' || c == '\n')
		return (1);
	else if (c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	cnt;
	int	sign;
	int	value;

	value = 0;
	sign = 1;
	cnt = 0;
	while (verify_true(str[cnt]))
	{
		cnt++;
	}
	while (str[cnt] == '-' || str[cnt] == '+')
	{
		if (str[cnt] == '-')
			sign = sign * (-1);
		cnt++;
	}
	while (str[cnt] >= '0' && str[cnt] <= '9')
	{
		value = value * 10;
		value = value + (str[cnt] - '0');
		cnt++;
	}
	return (value * sign);
}

/*int main()
{
	char str[] = " ---+--+1234ab567";
	printf("%d" ,ft_atoi(str));
}

isspace()
checks  for  white-space characters., these are: space,
form-feed ('\f'), ('\n'), ('\r'), horizontal  tab  ('\t'),  and
vertical tab ('\v')*/
// **********e o caso do minint***************?