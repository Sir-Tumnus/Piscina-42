/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usantos- <usantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 06:24:29 by usantos-          #+#    #+#             */
/*   Updated: 2021/04/04 18:08:18 by usantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int n)
{
	write(1, &n, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int y;

	x = 0;
	while (x <= 99)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_putchar('0' + (x / 10));
			ft_putchar('0' + (x % 10));
			write(1, " ", 1);
			ft_putchar('0' + (y / 10));
			ft_putchar('0' + (y % 10));
			if (x != 98 || y != 99)
			{
				write(1, ", ", 2);
			}
			y++;
		}
		x++;
	}
}
