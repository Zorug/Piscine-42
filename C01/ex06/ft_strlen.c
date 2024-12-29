/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 20:52:23 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/08 22:18:13 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (*(str + cnt))
	{
		cnt ++;
	}
	return (cnt);
}

/*int main()
{
	char	str[] = "123456789";

	ft_strlen(str);
}*/
