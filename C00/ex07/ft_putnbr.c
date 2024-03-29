/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 20:26:26 by lawences          #+#    #+#             */
/*   Updated: 2024/01/25 20:26:29 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	i;

	i = 0;
	if (nb <= -2147483648)
	{
		write (1, "-2", 2);
		ft_putnbr(147483648);
		return ;
	}
	else if (nb < 0)
	{
		write (1, "-", 1);
		nb = -nb;
	}
	if (nb < 10)
	{
		nb += 48;
		write (1, &nb, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		i = (nb % 10) + 48;
		write (1, &i, 1);
	}
}
