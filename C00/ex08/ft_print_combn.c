/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffacilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 14:38:30 by ffacilla          #+#    #+#             */
/*   Updated: 2020/11/29 15:10:24 by ffacilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	initn(int max, int nums[9])
{
	int i;

	i = 1;
	nums[0] = 0;
	while (i < max)
	{
		nums[i] = i;
		i++;
	}
}

void	scala(int pos, int max, int nums[9])
{
	if (nums[pos] < (10 - max + pos))
	{
		nums[pos]++;
		if (pos != max - 1)
			nums[pos + 1] = nums[pos] + 1;
	}
	else
	{
		scala(pos - 1, max, nums);
		nums[pos] = nums[pos - 1] + 1;
		if (pos != max - 1)
			nums[pos + 1] = nums[pos] + 1;
	}
}

void	print_current(int max, int nums[9])
{
	int		i;
	char	car;

	i = 0;
	while (i < max)
	{
		car = '0' + nums[i];
		write(1, &car, 1);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int nums[9];

	if (n < 1 || n > 9)
		return ;
	initn(n, nums);
	while (1)
	{
		print_current(n, nums);
		if (nums[0] == 10 - n)
			break ;
		scala(n - 1, n, nums);
		write(1, ", ", 2);
	}
}
