/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <lawences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 01:44:07 by lawences          #+#    #+#             */
/*   Updated: 2024/01/24 02:06:35 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	*tab;
	int	i;

	tab = malloc (10 * sizeof(int));
	i = -1;
	while (++i < 10)
		tab[i] = i;
	i = 0;
	printf("in -> %i", tab[i]);
	while (++i < 10)
		printf(", %i", tab[i]);
	printf("\n");
	ft_rev_int_tab(tab, 10);
	i = 0;
	printf("out -> %i", tab[i]);
	while (++i < 10)
		printf(", %i", tab[i]);
	printf("\n");
	free(tab);
	return (0);
}
