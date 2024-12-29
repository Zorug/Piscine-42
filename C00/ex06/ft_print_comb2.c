/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:40:21 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/23 16:40:22 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	num_lenght(int n)
{
	if (n / 10 > 0)
		return (2);
	else
		return (1);
}

void	write_num(int i)
{
	char	c;

	if (num_lenght(i) == 1)
	{
		write (1, "0", 1);
		c = (i + '0');
		write (1, &c, 1);
	}
	else
	{
		c = ((i / 10) + '0');
		write (1, &c, 1);
		c = ((i % 10) + '0');
		write (1, &c, 1);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			write_num(i);
			write (1, " ", 1);
			write_num(j);
			if (i == 98 && j == 99)
				break ;
			else
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}

/*int main()
{
	ft_print_comb2();
}*/