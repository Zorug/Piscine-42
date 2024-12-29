/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross-s <cgross-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:53:28 by cgross-s          #+#    #+#             */
/*   Updated: 2024/09/18 19:53:29 by cgross-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	g_x = 0;
int	g_y;
int g_bf_size;
int g_bt_size;

int	size_or_base_errors(char *str, char condition)
{
	if (condition == 's') {
		g_x = 0;
		while (str[g_x])
			g_x++;
		return (g_x);
	}
	else if (condition == 'e') {
		if (str[0] == '\0' || size_or_base_errors(str, 's') == 1)
			return (1);
		g_x = -1;
		while (str[++g_x]) {
			if (str[g_x] == '+' || str[g_x] == '-')
				return (1);
			g_y = g_x;
			while (str[++g_y])
				if (str[g_x] == str[g_y])
					return (1);
		}
		return (0);
	}
	return (2);
}

int	position_or_existence_c(char c, char *base, char condition)
{
	int	pos;

	pos = 0;
	if (condition == 'f') {
		while (base[pos] != c)
			pos++;
		return (pos);
	}
	else if (condition == 'e') {
		while (base[pos]) {
			if (base[pos] == c)
				return (0);
			pos++;
		}
		return (1);
	}
	else
		return (2);
}

int	verify_true(char c)
{
	if (c == ' ' || c == '\f' || c == '\n')
		return (1);
	else if (c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}



int	convert_to_int(char *nbr, int j, char *base_from)
{
	int	converted_char;
	int	multiplier;
	int	int_nbr;
	int k;

	multiplier = 1;
	int_nbr = 0;
	k = j;
	while (position_or_existence_c(nbr[j], base_from, 'e') == 0)
		j++;
	while (--j >= k) {
		converted_char = position_or_existence_c(nbr[j], base_from, 'f');
		int_nbr = int_nbr + converted_char * multiplier;
		multiplier = multiplier * g_bf_size;
	}
	return (int_nbr);
}


int	recursive_base(int int_nbr, char *base_to, char **string_p, int *cnt_char);

int	conditional_case(int b_value, int int_nbr, char *base_to, char **string_p, int *cnt_char)
{
	b_value = (int_nbr % g_bt_size) * (-1);
	recursive_base(int_nbr / g_bt_size * (-1), base_to, string_p, cnt_char);
	return (b_value);
}

int g_netive_condition;
char **malloc_origin;

int	recursive_base(int int_nbr, char *base_to, char **string_p, int *cnt_char)
{
	char	c;
	int		b_value;
	int	i;
	char *p;

	b_value = 0;
	if (int_nbr < 0) {

		g_netive_condition = -1;

		if (int_nbr == -2147483648)
		{
			(*cnt_char)++;
			b_value = conditional_case(b_value, int_nbr, base_to, string_p, cnt_char);

		}
		else

			(*cnt_char)++;
			printf("1----->\n");
			recursive_base(-int_nbr, base_to, string_p, cnt_char);
			printf("<-----1\n");


	}
	else if (int_nbr >= g_bt_size && int_nbr != -2147483648) {
		b_value = int_nbr % g_bt_size;

		(*cnt_char)++;
		printf("2----->\n");
		recursive_base(int_nbr / g_bt_size, base_to, string_p, cnt_char);
		printf("<-----2\n");


	}
	//else if (int_nbr != -2147483648)
	else
	{
		(*cnt_char)++;
		printf("3----->\n");
		//i = *cnt_char;
		printf("!!!<malloc pointers %d>!!!!\n", *cnt_char);
		*string_p = (char*)malloc((*cnt_char + 1)*sizeof(char));


		malloc_origin = string_p;


		printf("!!!<malloc2pointers %d>!!!!\n", *cnt_char);

		//*cnt_char = 0;
		printf("3.1----->\n");

		if (g_netive_condition == -1)
		{
			printf("3.15----->\n");
			//*string_p[*cnt_char] = '-';
			//printf("<->|%d|\n",*cnt_char);
			//*string_p[*cnt_char] = '-';
			**string_p = '-';
			printf("<%c>|%d|\n",**string_p, *cnt_char);
			(*string_p)++;
			//(*cnt_char)++;
			printf("3.17----->\n");
			//printf("<->|%d|\n",*cnt_char);
		}

		printf("3.2----->\n");

		b_value = int_nbr; //ending point

		printf("<-----3\n");
	}
	if (int_nbr >= 0)
	{
		printf("4----->\n");
		c = base_to[b_value];
		//printf("<-----3.3\n");
		printf("<%c>|%d|\n",c, *cnt_char);
		//*string_p[*cnt_char] = c;//>>>>
		**string_p = c;
		//printf("<-----3.5\n");
		(*string_p)++;
		//(*cnt_char)++;
		printf("<-----4\n");
	}

	return (int_nbr);
}


/*void copy_string(char **original, char *n_to_string)
{
	printf("\n\n****%lu***\n\n",sizeof(n_to_string));
}*/


//char	*ft_putnbr_base(int int_nbr, char *base_to)
void	ft_putnbr_base(int int_nbr, char *base_to)
{
	//int	g_bt_size;
	int cnt_char;
	//int *pt_cntc;
	char **string_p;
	char *n_to_string;
	char *original;
	int i;

	//copy_string(&original, n_to_string);

	//original = NULL;
	i = 0;
	string_p = &n_to_string;
	cnt_char = 0;
	//printf(" !1!\n%s\n!! ",n_to_string);
	//g_bt_size = size_or_base_errors(base_to, 's');
	if (size_or_base_errors(base_to, 'e') == 0)
	{
		//pointer_atributor (&n_to_string, &original);

		recursive_base(int_nbr, base_to, string_p, &cnt_char);
	}
		//return (recursive_base(int_nbr, base_size, base_to));
	/*else
		return (NULL);*/

	//*n_to_string = '\0';

	//**string_p = '\0';
	//printf(" !!point!!%d!!point!! ",cnt_char);
	//while (cnt_char >= 0)
	//	(*cnt_char)--;

	printf(" !2!<<<<\n%s\t\n>>>>>!2! ",*malloc_origin);
}


//char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
void	ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	j;
	int	k;
	int	g_sign;
	int	int_nbr;

	g_bf_size = size_or_base_errors(base_from, 's');
	g_bt_size = size_or_base_errors(base_to, 's');
	g_netive_condition = 0;

	g_sign = 1;
	if (size_or_base_errors(base_from, 'e') == 1)
		{
			//return (NULL);
			return;
		}
	j = 0;
	while (verify_true(nbr[j]) == 1)
		j++;
	while (nbr[j] == '-' || nbr[j] == '+')
	{
		if (nbr[j] == '-')
			g_sign = g_sign * (-1);
		j++;
	}
	int_nbr = convert_to_int(nbr, j, base_from);
	int_nbr = int_nbr * g_sign;
	//printf("%d", int_nbr);
	//printf("\n%s\n");

	//while ()

	ft_putnbr_base(int_nbr , base_to);
	//return(ft_putnbr_base(int_nbr , base_to));

}

int	main()
{
	char	*nbr;
	char	*base_from;
	char	*base_to;

	nbr = "945345";
	base_from = "0123456789";
	base_to = "01";

	//printf("%d\n", 
	ft_convert_base("-35621", "0123456789", "0123456789");
	//printf("%d\n", 
	ft_convert_base("0", "0123456789", "0123456789");
	//printf("%d\n", 
	ft_convert_base("64859", "0123456789", "0123456789");
	//ft_convert_base(nbr, base_from);
}//-2147483648