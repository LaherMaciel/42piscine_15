/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <lawences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 01:31:02 by lawences          #+#    #+#             */
/*   Updated: 2024/01/24 02:12:06 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	k;

	i = -1;
	while (++i < size / 2)
	{
		k = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = k;
	}
}
