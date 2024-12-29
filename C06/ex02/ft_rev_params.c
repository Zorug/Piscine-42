/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:40:44 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/17 13:40:45 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	write_string(char *str)
{
	int	sz;

	sz = 0;
	while (str[sz])
	{
		write(1, &str[sz], 1);
		sz++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc -1;
	while (i > 0)
	{
		write_string(argv[i]);
		write(1, "\n", 1);
		i--;
	}
}
