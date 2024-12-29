/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:15:31 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/12 17:15:32 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	recursive(int nb)
{
	char	str[10];
	int		cnt;
	int		size;

	cnt = 0;
	while (nb != 0)
	{
		str[cnt] = (nb % 10) + '0';
		nb = nb / 10;
		cnt++;
	}
	size = cnt - 1;
	while (str[size] && size >= 0)
	{
		write(1, &str[size], 1);
		size--;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb == 0)
	{
		write(1, "0", 1);
	}
	else
	{
		if (nb < 0)
		{
			nb = nb * -1;
			write(1, "-", 1);
		}
		recursive(nb);
	}
}

/*//2147483647 a -2147483648
int	main()
{
	int nb;

	nb = -2147483648;
	ft_putnbr(nb);
}*/