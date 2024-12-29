/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:10:24 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/16 13:10:26 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		power--;
	return (nb * ft_recursive_power(nb, power));
}

/*int main()
{
	int nb;
	int power;

	nb = 3;
	power = 3;
	printf("%d", ft_recursive_power(nb, power));
}*/