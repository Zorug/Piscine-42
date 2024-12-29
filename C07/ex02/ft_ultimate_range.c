/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:46:24 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/18 13:46:25 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*p;
	int	size;

	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	p = malloc(size * sizeof(int));
	if (p == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		p[i] = min + i;
		i++;
	}
	*range = p;
	return (size);
}

/*int main()
{
	//int **range;
	int *bange;
	int min;
	int max;
	int i;

	bange = NULL;
	//range = &bange;
	min = 10;
	max = 25;
	ft_ultimate_range(&bange, min, max);
	i = 0;
	while(i < (max - min))
	{
		printf("%d\t",bange[i]);
		i++;
	}
}*/