/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:36:27 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/11 18:36:29 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (count < n && (s1[count] != '\n' || s2[count] != '\n'))
	{
		if ((s1[count] != s2[count]))
		{
			return (s1[count] - s2[count]);
		}
		count++;
	}
	return (0);
}

/*int main ()
{
	char s1[] = "joseluizmario";
	char s2[] = "joseluizmario";
	unsigned int n;

	n = 8;

	ft_strncmp(char *s1, char *s2, unsigned int n)
}
*/