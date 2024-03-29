/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:53:28 by lawences          #+#    #+#             */
/*   Updated: 2024/01/25 20:36:43 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putsmallnbr(int i)
{
	char	k;

	if (i < 10)
	{
		k = i + '0';
		write (1, "0", 1);
		write (1, &k, 1);
	}
	else
	{
		k = i / 10 + '0';
		write (1, &k, 1);
		k = i % 10 + '0';
		write (1, &k, 1);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = -1;
	while (++i <= 98)
	{
		j = i;
		while (++j <= 99)
		{
			putsmallnbr(i);
			write (1, " ", 1);
			putsmallnbr(j);
			if (!(i == 98 && j == 99))
				write (1, ", ", 2);
		}
	}
}
