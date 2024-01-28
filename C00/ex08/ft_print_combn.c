/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <lawences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:53:50 by lawences          #+#    #+#             */
/*   Updated: 2024/01/24 12:53:50 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnber(int nb)
{
	int	i;

	i = 0;
	if (nb < 10)
	{
		nb += 48;
		write (1, &nb, 1);
	}
	else
	{
		ft_putnber((nb / 10));
		i = (nb % 10) + 48;
		write (1, &i, 1);
	}
}

int	ft_check_comb(int nb)
{
	int	i;

	i = 0;
	if (nb < 10)
		return (1);
	if (((nb / 10) % 10) < (nb % 10))
		return (ft_check_comb(nb / 10));
	return (i);
}

void	putzeros(int n, int nbr)
{
	int	i;
	int	b;

	i = nbr;
	b = 0;
	while (i > 10)
	{
		i = i / 10;
		b++;
	}
	b = n - b;
	while (--b > 0)
		write(1, "0", 1);
}

void	printf_conditions(int i, int n, int power_of)
{
	if (ft_check_comb(i) == 1)
	{
		if (i != (power_of - 1))
			write(1, ", ", 2);
		else if (n == 1 && i == 9)
			write(1, ", ", 2);
		putzeros(n, i);
		ft_putnber(i);
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	power_of;

	if (n < 1 || n > 9)
		return ;
	i = -1;
	power_of = 1;
	while (++i < n)
		power_of = power_of * 10;
	i = 1;
	if (ft_check_comb(i) == 1)
	{
		putzeros(n, i);
		ft_putnber(i);
	}
	while (++i < power_of)
		printf_conditions(i, n, power_of);
}
