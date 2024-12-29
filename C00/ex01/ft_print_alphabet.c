/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 19:11:09 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/05 21:32:31 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

//97 a 122 - ascii

void	ft_print_alphabet(void)
{
	int		ascii;
	char	c;

	ascii = 97;
	while (ascii <= 122)
	{
		c = ascii;
		write(1, &c, 1);
		ascii ++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
}
*/