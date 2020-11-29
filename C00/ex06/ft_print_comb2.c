/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffacilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 17:41:59 by ffacilla          #+#    #+#             */
/*   Updated: 2020/11/27 09:56:27 by ffacilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	int_to_ascii(int num)
{
	char result;

	result = '0' + num;
	return (result);
}

void	print(int x, int y, int z)
{
	char	space;
	char	comma;
	int		convert;

	space = ' ';
	comma = ',';
	convert = 0;
	convert = int_to_ascii(x / 10);
	write(1, &convert, 1);
	convert = int_to_ascii(x % 10);
	write(1, &convert, 1);
	write(1, &space, 1);
	convert = int_to_ascii(y / 10);
	write(1, &convert, 1);
	convert = int_to_ascii(y % 10);
	write(1, &convert, 1);
	if (z == 0)
	{
		write(1, &comma, 1);
		write(1, &space, 1);
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;
	int last;

	last = 0;
	a = 0;
	b = 1;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (a == 98)
			{
				last = 1;
			}
			if (a != b)
			{
				print(a, b, last);
			}
			b++;
		}
		a++;
	}
}
