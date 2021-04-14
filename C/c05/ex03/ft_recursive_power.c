/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usantos- <usantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 18:33:26 by usantos-          #+#    #+#             */
/*   Updated: 2021/04/13 18:50:18 by usantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive(int nb, int power, int res)
{
	res *= nb;
	power--;
	if (power > 0)
		return (ft_recursive(nb, power, res));
	return (res);
}

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (ft_recursive(nb, power, 1));
}
