/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:57:13 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/11 10:57:15 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count])
	{
		if (s1[count] != s2[count])
		{
			return (s1[count] - s2[count]);
		}
		count++;
	}
	if (s1[count] == '\0')
	{
		if (s1[count] != s2[count])
		{
			return (s1[count] - s2[count]);
		}
		count++;
	}
	return (0);
}

/*
int main()
{
	char s1[] = "jose";
	char s2[] = "jxse";
	int f;

	f = ft_strcmp(s1, s2);
	printf("%d\n", f);
}

 [3] Compare two different strings of different length Expected -49, got 0
*/
