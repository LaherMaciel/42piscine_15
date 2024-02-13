/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 22:58:43 by lawences          #+#    #+#             */
/*   Updated: 2024/02/12 23:49:49 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	*range;
	int	size;
	int	min;
	int	max;
	int	i;

	min = 0;
	max = 10;
	size = ft_ultimate_range(&range, min, max);
	i = -1;
	while (++i < size)
		printf("%i\n", range[i]);
	free(range);
	return (0);
}