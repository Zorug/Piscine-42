/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 22:19:30 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/09 00:08:23 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;
	int	temp;
	int	max_value;

	counter = 0;
	max_value = size - 1;
	while (counter < (size / 2))
	{
		temp = tab[counter];
		tab[counter] = tab[max_value - counter];
		tab[max_value - counter] = temp;
		counter++;
	}
}

/*
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int arraySize;
	int counter;

	arraySize = sizeof(arr) / sizeof(arr[0]);
	counter = 0;

	ft_rev_int_tab(arr, arraySize);

	while(counter < arraySize)
	{
		printf("%d", arr[counter]);
		counter++;
	}	
}
*/