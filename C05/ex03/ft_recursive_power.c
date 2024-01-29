/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <lawences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:00:48 by lawences          #+#    #+#             */
/*   Updated: 2024/01/28 17:06:11 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (nb < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	else if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, (power - 1)));
}
