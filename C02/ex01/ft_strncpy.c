/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 19:21:09 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/09 19:21:11 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while (counter < n && src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}
	while (counter < n)
	{
		dest[counter] = '\0';
		counter++;
	}
	return (dest);
}

/*
int main()
{
	unsigned int n;
	char str_src[] = "World1";
	char str_dest[] = "Hello";

	n = 5;

	ft_strncpy(str_dest, str_src, n);

	printf("%s", str_dest);

}
*/
