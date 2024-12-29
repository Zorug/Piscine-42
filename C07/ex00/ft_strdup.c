/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:07:53 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/17 17:07:54 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h> 

char	*ft_strdup(char *src)
{
	int		i;
	char	*p1;

	if (!src)
		return (NULL);
	i = 0;
	while (src[i])
		i++;
	p1 = (char *)malloc((i + 1) * sizeof(char));
	if (!p1)
		return (NULL);
	i = 0;
	while (src[i])
	{
		p1[i] = src[i];
		i++;
	}
	p1[i] = '\0';
	return (p1);
}

/*int main()
{
	char *src = "carlos albERto";

	printf("%s",ft_strdup(src));
}*/
/*
The  strdup() function returns a pointer to a new 
string which is a duplicate of the string s.
Memory for the new string is obtained with malloc(3), 
and can be freed with free(3).
*/
