/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:54:49 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/18 16:54:51 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 
#include <stdio.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	matrix_len(char **strs, int size)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len = str_len(strs[i]) + len;
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*p;
	int		i;
	int		j;
	int		k;

	if (!strs || !sep)
		return (NULL);
	p = (char *)malloc(matrix_len(strs, size) + (size - 1) * str_len(sep) + 1);
	if (p == NULL)
		return (NULL);
	if (size == 0)
		return (p);
	i = -1;
	k = 0;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
			p[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i != size -1)
			p[k++] = sep[j++];
	}
	p[k] = '\0';
	return (p);
}

/*int main()
{
	int size;
	char *strs[4];

	strs[0] = "Cassiano";
	strs[1] = "Gross";
	strs[2] = "Schuler";
	strs[3] = "Martins";
	size = 4;

	printf("%s", ft_strjoin(4, strs, "*"));
	//printf("%s\t%s\t%s",strs[0],strs[1],"_");
	//case sep > 1
}*/