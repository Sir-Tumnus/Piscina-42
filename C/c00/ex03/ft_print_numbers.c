/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usantos- <usantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 21:22:32 by usantos-          #+#    #+#             */
/*   Updated: 2021/04/04 18:02:58 by usantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char start;

	start = '0';
	while (start <= '9')
	{
		write(1, &start, 1);
		start++;
	}
}
