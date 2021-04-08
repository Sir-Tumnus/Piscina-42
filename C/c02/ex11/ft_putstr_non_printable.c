/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usantos- <usantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 14:23:20 by usantos-          #+#    #+#             */
/*   Updated: 2021/04/08 17:54:32 by usantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_printable(char c)
{
	if (c >= ' ' && c < 127)
		return (c);
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	now;

	i = 0;
	while (str[i] != '\0')
	{
		now = str[i];
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
