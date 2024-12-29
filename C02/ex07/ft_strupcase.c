/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:36:50 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/10 13:36:52 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		if ((str[counter] >= 97) && (str[counter] <= 122))
		{
			str[counter] = str[counter] - 32;
		}
		counter++;
	}
	return (str);
}

/*// uper A65-Z90 lower a97-z122 diff = 97-65 = 32
int main()
{
	char str[] = "ride far away, cross the might river kay...";
	//char str[] = "abcdefghijklmnopqrstuvwxyz";
	ft_strupcase(str);
	printf("%s", str);
	return (0);
}*/