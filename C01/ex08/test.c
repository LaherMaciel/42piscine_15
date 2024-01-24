/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <lawences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 02:52:35 by lawences          #+#    #+#             */
/*   Updated: 2024/01/24 03:06:23 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	*tab;
	int	i;
	int	size;

	size = 10;
	tab = malloc (size * sizeof(int));
	srand(time(NULL));
	i = -1;
	while (++i < size)
		tab[i] = rand() % 101;
	i = 0;
	printf("in -> %i", tab[i]);
	while (++i < size)
		printf(", %i", tab[i]);
	printf("\n");
	ft_sort_int_tab(tab, size);
	i = 0;
	printf("out -> %i", tab[i]);
	while (++i < size)
		printf(", %i", tab[i]);
	printf("\n");
	free(tab);
	return (0);
}
