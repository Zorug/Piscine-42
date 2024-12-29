/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:00:02 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/05 21:42:32 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//ascii 48 a 57

void	ft_print_numbers(void)
{
	int		ascii;
	char	c;

	ascii = 48;
	while (ascii <= 57)
	{
		c = ascii;
		write(1, &c, 1);
		ascii ++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
}
*/