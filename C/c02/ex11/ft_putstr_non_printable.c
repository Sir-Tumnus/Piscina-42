/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usantos- <usantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 14:23:20 by usantos-          #+#    #+#             */
/*   Updated: 2021/04/10 01:40:31 by usantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

bool	ft_printable(char c)
{
	return (c >= 32 && c < 127)
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	unsigned char	now;

	i = 0;
	while(true)
	{
		now = str[i];
		if (now == '\0')
			break ;
		if (ft_printable(now))
			ft_putchar(now);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789ABCDEF"[now / 16]);
			ft_putchar("0123456789ABCDEF"[now % 16]);
		}
		i++;
	}
}

