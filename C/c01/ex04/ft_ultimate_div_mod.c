/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usantos- <usantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 22:34:12 by usantos-          #+#    #+#             */
/*   Updated: 2021/04/06 19:13:50 by usantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		holder;
	int		*point_holder;

	holder = *a;
	point_holder = &holder;
	*a = *a / *b;
	*b = *point_holder % *b;
}
