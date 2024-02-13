/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 23:11:02 by lawences          #+#    #+#             */
/*   Updated: 2024/02/12 17:57:16 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strchar(char *base, char c, int i)
{
	while (base[++i])
	{
		if (base[i] == c)
			return (-1);
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
			|| ft_strchar(base, base[i], i) == -1)
			return (-1);
	}
	if (i < 2)
		return (-1);
	return (i);
}

void	ft_putnbr_base_recr(long nbr, char *base, long len)
{
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr < len)
		write(1, &base[nbr], 1);
	else
	{
		ft_putnbr_base_recr(nbr / len, base, len);
		write(1, &base[nbr % len], 1);
	}
}


void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	len = check_base(base);
	if (len != -1)
		ft_putnbr_base_recr(nbr, base, len);
}
