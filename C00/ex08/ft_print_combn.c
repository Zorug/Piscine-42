/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:11:25 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/23 19:11:26 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	auto_loop(int n, int start, int depth, char *comb)
{
	int	i;

	i = start;
	if (depth == n)
	{
		write(1, comb, n);
		if (comb[0] != '9' - n + 1)
			write(1, ", ", 2);
		return ;
	}
	while (i <= 10 - (n - depth))
	{
		comb[depth] = i + '0';
		auto_loop(n, i + 1, depth + 1, comb);
		i++;
	}
}

void	ft_print_combn(int n)
{
	char	comb[10];

	if (n > 0 && n < 10)
		auto_loop(n, 0, 0, comb);
}

/*int main()
{
	int n;

	n = 2;
	ft_print_combn(n);
}*/
/*
if (comb[0] != '9' - n + 1)
verifica se o primeiro digito da combinacao atual é o maior 
valor inicial possivel para uma combinacao de n digitos.
eh usada para identificar a última combinacao e evitar a impressao de uma 
virgula e 
espaco apos ela garantindo que o formato da saida seja correto.
*/