/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usantos- <usantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 17:39:31 by usantos-          #+#    #+#             */
/*   Updated: 2021/04/13 23:57:41 by usantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive(int factorial, int nb)
{
	factorial *= nb;
	nb--;
	if (nb > 0)
		return (ft_recursive(factorial, nb));
	return (factorial);
}

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (ft_recursive(1, nb));
}
