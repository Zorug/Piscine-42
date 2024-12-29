/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:48:49 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/16 13:48:50 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	if (nb <= 0)
		return (0);
	while (n * n <= nb)
	{
		if (n * n == nb)
			return (n);
		n++;
	}
	return (0);
}

/*int main()
{
	int nb;

	nb = 0;
	printf("%d", ft_sqrt(nb));
}*/