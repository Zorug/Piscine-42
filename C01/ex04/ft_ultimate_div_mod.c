/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 15:49:19 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/08 16:39:25 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_pa;
	int	temp_pb;

	temp_pa = *a;
	temp_pb = *b;
	*a = temp_pa / temp_pb;
	*b = temp_pa % temp_pb;
}

/*int	main()
{
	int na;
	int nb;
	
	int * a;
	int * b;
	
	na = 6;
	nb = 2;
	
	a = &na;
	b = &nb;

	ft_ultimate_div_mod(&na, &nb);
	
	printf("%d\t%d\n", na, nb);
}*/
