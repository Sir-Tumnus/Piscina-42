/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usantos- <usantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 17:39:13 by usantos-          #+#    #+#             */
/*   Updated: 2021/04/05 05:41:09 by usantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	int		counter;
	int		keeper;
	int		array[n];

	counter = 0;
	if (n == 1)
	{
		while (counter < 10)
		{
			keeper = counter;
			counter++;
			ft_putchar(keeper + '0');
		}
	}
	while (counter < n && n > 1)
	{
		number[counter] = 0;
		counter++;
	}
	while (number[0] <= (10 - n) && n > 1)
	{
		ft_print_array(array, n);
	}
}
