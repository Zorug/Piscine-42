/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:31:17 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/10 14:31:20 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		if ((str[counter] >= 65) && (str[counter] <= 90))
		{
			str[counter] = str[counter] + 32;
		}
		counter++;
	}
	return (str);
}

/*// uper A65-Z90 lower a97-z122 diff = 97-65 = 32
int main()
{
	char str[] = "COME ON BABY LET'S DO THE TWIST.. 865 gogogo";
	//char str[] = "abcdefghijklmnopqrstuvwxyz";
	ft_strlowcase(str);
	printf("%s", str);
	return (0);
}*/