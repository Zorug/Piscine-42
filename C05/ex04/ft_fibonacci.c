/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:26:35 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/16 13:26:36 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	index_t;

	index_t = index;
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

/*int main()
{
	int index;

	index = -1;
	printf("%d", ft_fibonacci(index));
}*/