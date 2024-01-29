/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <lawences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:43:42 by lawences          #+#    #+#             */
/*   Updated: 2024/01/28 16:07:01 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_hexa(int nbr)
{
	char	to_print;
	char	*base;

	base = "0123456789abcdef";
	if (nbr < 16)
	{
		to_print = base[nbr];
		write(1, &to_print, 1);
		return ;
	}
	else
	{
		put_hexa(nbr / 16);
		to_print = (nbr % 16) + '0';
		write (1, &to_print, 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
	{
		if (!(str[i] >= 32 && str[i] < 127))
		{
			write(1, "\\", 1);
			put_hexa(str[i]);
		}
		else
			write (1, &str[i], 1);
	}
}
