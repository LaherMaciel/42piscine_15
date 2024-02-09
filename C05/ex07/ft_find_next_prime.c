/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 19:54:07 by lawences          #+#    #+#             */
/*   Updated: 2024/02/09 02:13:33 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long	ft_is_prime(long nb)
{
	long	i;

	if (nb < 2)
		return (0);
	i = 2;
	while ((i * i) <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	long	i;
	long	val;
	
	i = 0;
	val = nb;
	if (val <= 1)
		return (2);
	i = val + 1;
	while (1)
	{
		if (ft_is_prime(i) == 1)
			return (i);
		i++;
	}
	return (val);
}
