/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 23:11:02 by lawences          #+#    #+#             */
/*   Updated: 2024/02/09 05:01:07 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int	ft_strchar(char *base, char c, int i)
{
	while (base[++i])
	{
		if (base[i] == c)
			return (1);
	}
	return (0);
}

int	check_base(char *base)
{
	int	i;

	i = -1;
	if (!base)
		return (1);
	while (base[++i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == ' '
			|| ft_strchar(base, base[i], i) == 1)
			return (1);
	}
	if (i < 2)
		return (1);
	return (i);
}

int	base_int_min(int nbr, int len, char *base, char to_print)
{
	if (nbr == -2147483648)
	{
		ft_putnbr_base(2, base);
		ft_putnbr_base((147483648 / len), base);
		to_print = base[(147483648 % len)];
		write(1, &to_print, 1);
		return (1);
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	char	to_print;

	to_print = '\0';
	len = check_base(base);
	if (len == 1)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		if (base_int_min(nbr, len, base, to_print) == 1)
			return ;
		nbr = -nbr;
	}
	if (nbr < len)
	{
		to_print = base[nbr];
		write(1, &to_print, 1);
	}
	else
	{
		ft_putnbr_base(nbr / len, base);
		to_print = base[nbr % len];
		write(1, &to_print, 1);
	}
}
