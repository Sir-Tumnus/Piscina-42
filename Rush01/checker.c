/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usantos- <usantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 22:40:17 by usantos-          #+#    #+#             */
/*   Updated: 2021/04/12 01:04:53 by usantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "library.h"

char	*validette(char *argv)
{
	int		i;
	int		j;
	char	*ponteiro;

	i = 0;
	j = 0;
	ponteiro = malloc(16);
	while (argv[j])
	{
		if (argv[j] >= '1' && argv[j] <= '4')
		{
			ponteiro[i] = argv[j] - '0';
			i++;
			j++;
			if (argv[j] != ' ' && i < 16)
			{
				ft_prints("Error\n");
				return (0);
			}
		}
		j++;
	}
	return (ponteiro);
}
