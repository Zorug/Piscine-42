/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:26:23 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/18 11:26:24 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	size;
	int	i;

	if (min >= max)
		return (NULL);
	size = max - min;
	arr = (int *)malloc(size * sizeof(int));
	i = 0;
	while (i < size)
	{
		arr[i] = i + min;
		i++;
	}
	return (arr);
}

/*int main()
{
	int *arr;
	int min;
	int max;
	int i;

	min = 30;
	max = 15;
	arr = ft_range(min, max);
	i = 0;
	while(i < (max - min))
	{
		printf("%d\t%d\n", i, arr[i]);
		i++;
	}
}*/