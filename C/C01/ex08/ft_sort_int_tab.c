/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usantos- <usantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:02:40 by usantos-          #+#    #+#             */
/*   Updated: 2021/04/06 19:13:27 by usantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	holder;
	int boolean;
	int i;

	boolean = 1;
	i = 0;
	while (boolean == 1)
	{
		boolean = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				holder = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = holder;
				boolean = 1;
			}
			i++;
		}
		i = 0;
	}
}
