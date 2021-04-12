/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usantos- <usantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 18:37:35 by usantos-          #+#    #+#             */
/*   Updated: 2021/04/12 01:04:41 by usantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "library.h"

int		volidette_col(char *str)
{
	char	*pt_str;
	int		i;

	pt_str = str;
	i = 0;
	while (i <= 4)
	{
		if (!(pt_str[i] + pt_str[i + 4] >= 3 && pt_str[i] + pt_str[i + 4] <= 5))
			return (0);
		i++;
	}
	return (1);
}

int		volidette_row(char *str2)
{
	char	*pt_str;
	int		i;

	pt_str = str2;
	i = 8;
	while (i <= 11)
	{
		if (!(pt_str[i] + pt_str[i + 4] >= 3 && pt_str[i] + pt_str[i + 4] <= 5))
			return (0);
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	char	*pt_val;
	int		val_col;
	int		val_row;
	int		soma;

	if ((argc != 2) || (ft_strlen(argv[1]) != 31))
	{
		ft_prints("Error\n");
		return (1);
	}
	pt_val = validette(argv[1]);
	val_col = volidette_col(pt_val);
	val_row = volidette_row(pt_val);
	if (val_col && val_row)
		ft_prints("Valid Game!!\n");
	else
		ft_prints("Invalid Game!!\n");
}
