/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usantos- <usantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 20:51:01 by usantos-          #+#    #+#             */
/*   Updated: 2021/04/08 17:39:21 by usantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
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
		if ((now >= 'a' && now <= 'z') || (now >= 'A' && now <= 'Z'))
			boolean = 1;
		i++;
	}
	return (boolean);
}
