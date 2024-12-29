/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:32:24 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/16 15:32:25 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 1;
	if (nb <= 1)
		return (0);
	while (i++ < nb - 1)
	{
		if (! (nb % i))
			return (0);
	}
	return (1);
}

/*int main()
{
	int nb;

	nb = 17;
	printf("%d", ft_is_prime(nb));
}*/