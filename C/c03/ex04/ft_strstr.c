/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usantos- <usantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 11:17:38 by usantos-          #+#    #+#             */
/*   Updated: 2021/04/12 18:28:10 by usantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*pt_tofind;
	char	*pt_str;
	int		boolean;

	if (*to_find == '\0')
		return (str);
	pt_tofind = to_find;
	pt_str = str;
	boolean = 1;
	while (boolean)
	{
		if (*pt_tofind == '\0')
			return ((char *)(pt_str - (pt_tofind - to_find)));
		if (*pt_str == *pt_tofind)
			pt_tofind++;
		else
			pt_tofind = to_find;
		if (*pt_str == '\0')
			break ;
		pt_str++;
	}
	return (0);
}
