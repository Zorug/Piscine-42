/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:14:57 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/16 18:14:59 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 1;
	if (nb <= 1)
		return (2);
	while (i++ < nb - 1)
	{
		if (!(nb % i))
			return (ft_find_next_prime(nb + 1));
	}
	return (nb);
}

/*int main ()
{
	int nb;

	nb = 90;
	printf("%d", ft_find_next_prime(nb));
}*/