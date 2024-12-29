/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 21:23:18 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/11 21:23:19 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	cnti;
	int	cntj;

	cnti = 0;
	cntj = 0;
	while (dest[cnti])
	{
		cnti++;
	}
	while (src[cntj])
	{
		dest[cnti] = src[cntj];
		cnti++;
		cntj++;
	}
	dest[cnti] = '\0';
	return (dest);
}

/*int main()
{
	char src[] = "from source";
	char dest[50] = "to destiny";
	printf("%s", ft_strcat(dest, src));
}*/