/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usantos- <usantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 21:39:10 by usantos-          #+#    #+#             */
/*   Updated: 2021/04/13 22:31:29 by usantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (nb);
	i = 0;
	while ((i * i) < nb)
		i++;
	return ((i * i) == nb ? i : 0);
}

int	ft_is_prime(int nb)
{
	int i;
	int sqrt;

	if (nb == 1)
		return (0);
	if (nb == 3 || nb == 2)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 2;
	sqrt = ft_sqrt(nb);
	while ((i <= sqrt) && (nb % i != 0))
		i++;
	return ((i > sqrt) ? 1 : 0);
}
