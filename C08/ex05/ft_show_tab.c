/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 21:04:45 by lawences          #+#    #+#             */
/*   Updated: 2024/02/13 22:50:52 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

void	ft_putnbr(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		write (1, "-", 1);
		if (nb <= -2147483648)
		{
			write (1, "2", 1);
			ft_putnbr(147483648);
			return ;
		}
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

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = -1;
	while (par[++i].str != 0)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
	}
}
