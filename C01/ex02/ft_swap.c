/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 14:06:36 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/08 15:11:02 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main()
{
	int	var1;
	int	var2;
	int	* ptr1;
	int	* ptr2;
	
	var1 = 1;
	ptr1 = &var1;
	var2 = 2;
	ptr2 = &var2;
	
	ft_swap(&var1, &var2);
}*/
