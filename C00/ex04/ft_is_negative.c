/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:36:52 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/05 21:45:09 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	np;

	if (n >= 0)
	{
		np = 'P';
	}
	else
	{
		np = 'N';
	}
	write(1, &np, 1);
}
/*
int	main(void)
{
	int	num;

	num = -7;
	ft_is_negative(num);
}
*/