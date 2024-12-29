/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 16:05:55 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/05 16:13:22 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

//97 a 122 - ascii

void	ft_print_reverse_alphabet(void)
{
	int		ascii;
	char	c;

	ascii = 122;
	while (ascii >= 97)
	{
		c = ascii;
		write(1, &c, 1);
		ascii --;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
}
*/