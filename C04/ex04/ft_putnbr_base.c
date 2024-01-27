/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 23:11:02 by lawences          #+#    #+#             */
/*   Updated: 2024/01/27 23:41:08 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	
	i = 0;
	while (s2[i] || s1[i])
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

int	check_base(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	if (i == 10 && ft_strcmp(base, "0123456789") == 0)
		return (i);
	if (i == 16 && ft_strcmp(base, "0123456789ABCDEF") == 0)
		return (i);
	if (i == 1 && ft_strcmp(base, "01") == 0)
		return (i);
	if (i == 8 && ft_strcmp(base, "poneyvif") == 0)
		return (i);
	return (0);
}

void ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		len;
	char	to_print;

	i = 0;
	len = check_base(base);
	if (len == 0)
		return ;
	if (nbr < 0)
	{
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
