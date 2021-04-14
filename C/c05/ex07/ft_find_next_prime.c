/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usantos- <usantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 22:22:16 by usantos-          #+#    #+#             */
/*   Updated: 2021/04/14 12:59:17 by usantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_prime(int nb)
{
	int i;
	int sqrt;

	if (nb < 0)
		return (0);
	if (nb == 3 || nb == 2)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 5;
	while ((i * i) <= nb)
	{
		if ((nb % i == 0) || (nb % (i + 2) == 0))
			return (0);
		i += 6;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int boolean;

	boolean = 1;
	while (boolean)
	{
		if (ft_prime(nb))
			return (nb);
		nb++;
	}
	return (0);
}
