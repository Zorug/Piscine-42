/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 16:40:50 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/08 19:11:12 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int	indx;

	indx = 0;
	while (*(str + indx) != '\0')
	{
		write(1, (str + indx), 1);
		indx++;
	}
}

/*int	main()
{
	char	texto[] = "Bom dia!";
	ft_putstr(texto);
}*/