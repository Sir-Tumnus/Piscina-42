/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usantos- <usantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 01:21:11 by usantos-          #+#    #+#             */
/*   Updated: 2021/04/08 17:41:48 by usantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
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
		if (now >= 'a' && now <= 'z')
			boolean = 1;
		i++;
	}
	return (boolean);
}
