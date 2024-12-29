/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 00:48:38 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/21 00:48:39 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	str_size(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	verify_base_errors(char *str, int size)
{
	int	i;
	int	j;

	if (str[0] == '\0' || size == 1)
		return (1);
	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (1);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	recursive_base(int nbr, int base_size, char *base);

int	conditional_case(int b_value, int nbr, int base_size, char *base)
{
	b_value = (nbr % base_size) * (-1);
	recursive_base(nbr / base_size * (-1), base_size, base);
	return (b_value);
}

int	recursive_base(int nbr, int base_size, char *base)
{
	char	c;
	int		b_value;

	b_value = 0;
	if (nbr < 0)
	{
		write(1, "-", 1);
		if (nbr == -2147483648)
			b_value = conditional_case(b_value, nbr, base_size, base);
		else
			nbr = -nbr;
	}
	if (nbr >= base_size && nbr != -2147483648)
	{
		b_value = nbr % base_size;
		if (nbr > 0)
			recursive_base(nbr / base_size, base_size, base);
	}
	else if (nbr != -2147483648)
		b_value = nbr;
	c = base[b_value];
	write(1, &c, 1);
	return (nbr);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_size;

	base_size = str_size(base);
	if (verify_base_errors(base, base_size) == 0)
		recursive_base(nbr, base_size, base);
}

/*int main()
{
	int nbr;
	char *base;

	//nbr = -15;
	nbr = -2147483648;
	//base = "0123456789ABCDEF";
	base = "01";
	ft_putnbr_base(nbr, base);
}*/