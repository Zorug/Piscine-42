/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 16:33:51 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/12 16:33:53 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*(str++))
	{
		count++;
	}
	return (count);
}

/*int main()
{
	char str[] = "123456789012345";
	//ft_strlen(str);
	printf("%d", ft_strlen(str));
}*/