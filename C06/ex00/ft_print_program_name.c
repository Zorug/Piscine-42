/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 12:16:26 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/13 12:16:27 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	cnt;

	cnt = 0;
	while (argv[0][cnt])
	{
		cnt++;
	}
	if (argc == 0)
	{
		return (0);
	}
	write(1, argv[0], cnt);
	write(1, "\n", 1);
}
