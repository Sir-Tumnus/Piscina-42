/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usantos- <usantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 01:36:15 by usantos-          #+#    #+#             */
/*   Updated: 2021/04/08 17:45:45 by usantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_printable(char *str)
{
	int		i;
	int		boolean;
	char	now;

	i = 0;
	boolean = 1;
	while (boolean)
	{
		now = str[i];
		if (now == '\0')
			break ;
		boolean = 0;
		if (now >= 32 && now <= 126)
			boolean = 1;
		i++;
	}
	return (boolean);
}
