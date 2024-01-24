/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <lawences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 03:22:33 by lawences          #+#    #+#             */
/*   Updated: 2024/01/24 01:05:24 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	aux(int i, int j, int k, int l)
{
	write (1, &i, 1);
	write (1, &j, 1);
	write (1, " ", 1);
	write (1, &k, 1);
	write (1, &l, 1);
	if (!(i == 57 && j == 56 && k == 57))
		write (1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 47;
	while (++i <= 57)
	{
		j = 47;
		while (++j <= 57)
		{
			k = i - 1;
			while (++k <= 57)
			{
				l = j;
				while (++l <= 57)
				{
					aux(i, j, k, l);
					if (i == 57 && j == 56 && k == 57 && l == 57)
						break ;
				}
			}
		}
	}
}
