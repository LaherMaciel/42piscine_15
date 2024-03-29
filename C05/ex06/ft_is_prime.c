/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:45:13 by lawences          #+#    #+#             */
/*   Updated: 2024/02/12 17:15:26 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 2 || nb == 3)
		return (1);
	if (nb < 2 || nb % 2 == 0)
		return (0);
	i = 3;
	while (i < nb / i)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	if (nb % i == 0)
		return (0);
	return (1);
}
