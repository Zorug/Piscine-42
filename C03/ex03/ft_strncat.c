/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 23:04:13 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/11 23:04:14 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	cnti;
	unsigned int	cntj;

	cnti = 0;
	cntj = 0;
	while (dest[cnti])
	{
		cnti++;
	}
	while ((cntj < nb) && (src[cntj] != '\0'))
	{
		dest[cnti] = src[cntj];
		cnti++;
		cntj++;
	}
	dest[cnti] = '\0';
	return (dest);
}

/*
int main()
{
	char src[] = "from source";
	char dest[50] = "to destiny";
	unsigned int nb;

	nb = 20;

	printf("%s", ft_strncat(dest, src, nb));
}*/