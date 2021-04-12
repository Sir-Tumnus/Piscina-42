/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usantos- <usantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 12:47:13 by usantos-          #+#    #+#             */
/*   Updated: 2021/04/12 01:15:29 by usantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	dst_size;

	i = 0;
	dst_size = 0;
	while (dest[dst_size])
		dst_size++;
	while (src[i])
	{
		if (dst_size < size - 1)
			dest[dst_size] = src[i];
		dst_size++;
		i++;
	}
	dest[dst_size - 1] = '\0';
	return (dst_size);
}
