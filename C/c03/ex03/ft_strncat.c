/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usantos- <usantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 11:01:48 by usantos-          #+#    #+#             */
/*   Updated: 2021/04/10 11:17:08 by usantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *p_dest;

	p_dest = dest;
	while (*p_dest)
		p_dest++;
	while (*src && nb > 0)
	{
		*p_dest = *src;
		p_dest++;
		src++;
		nb--;
	}
	*p_dest = '\0';
	return (dest);
}
