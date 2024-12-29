/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:43:08 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/16 11:43:09 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (nb > 0)
	{
		result = result * (nb);
		nb = nb -1;
	}
	return (result);
}

/*int main()
{
	int nb;
	nb = -6;
	printf("%d", ft_iterative_factorial(nb));
}
//max int = 2147483647 
// int > 12 max overflow*/