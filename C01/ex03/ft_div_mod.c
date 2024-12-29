/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 15:14:13 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/08 15:37:48 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int 	main()
{
	int a;
	int b;
	
	int di;
	int mo;
	
	int * div;
	int * mod;
	
	a = 8;
	b = 3;
	
	div = &di;
	mod = &mo;
	
	ft_div_mod(a, b, &di, &mo);
	
	printf("%d\t%d\n",*div,*mod);
}*/
