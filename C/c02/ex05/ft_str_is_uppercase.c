/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usantos- <usantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 01:28:16 by usantos-          #+#    #+#             */
/*   Updated: 2021/04/08 17:45:40 by usantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
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
		if (now >= 'A' && now <= 'Z')
			boolean = 1;
		i++;
	}
	return (boolean);
}
