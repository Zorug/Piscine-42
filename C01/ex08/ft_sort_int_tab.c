/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:49:49 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/09 12:49:51 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	jump_pares;
	int	restart;
	int	temp;

	jump_pares = 0;
	restart = 0;
	while (restart < size)
	{
		jump_pares = 0;
		while (jump_pares < (size -1))
		{
			if (tab[jump_pares] > tab[jump_pares +1])
			{
				temp = tab[jump_pares];
				tab[jump_pares] = tab[jump_pares +1];
				tab[jump_pares +1] = temp;
			}
			jump_pares++;
		}
		restart++;
	}
}

/*int main()
{
	int arr[] = {9, 8 , 7 , 6, 5, 4, 3, 2, 1};
	int array_size;
	int counter;

	counter = 0;

	array_size = sizeof(arr) / sizeof(arr[0]);

	ft_sort_int_tab(arr, array_size);

	printf("\n");
	while (counter < array_size)
	{
		printf("depois = %d\n", arr[counter]);
		counter++;
	}
}*/