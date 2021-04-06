/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usantos- <usantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 03:22:28 by usantos-          #+#    #+#             */
/*   Updated: 2021/04/05 06:13:57 by usantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(char k, char l, char m)
{
	ft_putchar(k);
	ft_putchar(l);
	ft_putchar(m);
	if (k < '7')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int x;
	int y;
	int z;

	x = '0';
	while (x <= '7')
	{
		y = x + 1;
		while (y <= '8')
		{
			z = y + 1;
			while (z <= '9')
			{
				print(x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}

int main ()
{
	ft_print_comb();
}
