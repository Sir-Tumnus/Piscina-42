/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usantos- <usantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 00:33:13 by aruth-ra          #+#    #+#             */
/*   Updated: 2021/04/05 02:33:16 by usantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int line_a, int column_a, int y, int x)
{
	if (line_a == 0)
		if (column_a == 0)
			ft_putchar('/');
		else if (column_a == x)
			ft_putchar('\\');
		else
			ft_putchar('*');
	else if (line_a == y)
		if (column_a == 0)
			ft_putchar('\\');
		else if (column_a == x)
			ft_putchar('/');
		else
			ft_putchar('*');
	else if (column_a == 0 || column_a == x)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	column_a;
	int	line_a;

	line_a = 0;
	if (x >= 1 && y >= 1)
	{
		while (line_a < y)
		{
			column_a = 0;
			while (column_a < x)
			{
				ft_print(line_a, column_a, y - 1, x - 1);
				column_a++;
			}
			ft_putchar('\n');
			line_a++;
		}
	}
}
