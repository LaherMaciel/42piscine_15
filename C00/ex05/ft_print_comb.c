/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <lawences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:53:18 by lawences          #+#    #+#             */
/*   Updated: 2024/01/24 12:53:18 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 47;
	while (++i <= 55)
	{
		j = i;
		while (++j <= 56)
		{
			k = j;
			while (++k <= 57)
			{
				write (1, &i, 1);
				write (1, &j, 1);
				write (1, &k, 1);
				if (!(i == 55 && j == 56))
					write (1, ", ", 2);
			}
		}
	}
}
