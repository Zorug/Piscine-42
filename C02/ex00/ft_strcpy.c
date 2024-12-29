/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:12:22 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/09 16:13:20 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	counter;

	counter = 0;
	while (src[counter])
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}
/*
int main()
{

	char str_src[] = "Wanna copy that";
	char str_dest[] = "Change that string";

    ft_strcpy(str_dest, str_src);

    printf("%s", str_dest);
}*/