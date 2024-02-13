/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:56:20 by lawences          #+#    #+#             */
/*   Updated: 2024/02/12 16:38:18 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	val;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = -1;
	val = nb;
	while (++i < (power - 1))
		nb *= val;
	return (nb);
}
