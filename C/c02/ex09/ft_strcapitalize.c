/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usantos- <usantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 11:15:19 by usantos-          #+#    #+#             */
/*   Updated: 2021/04/09 22:23:36 by usantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_to_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{	
	int	i;
	int	other_c;

	i = 0;
	other_c = 1;
	ft_to_lowercase(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (other_c == 1)
				str[i] = str[i] - 32;
			other_c = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			other_c = 0;
		else
			other_c = 1;
		i++;
	}
	return (str);
}
