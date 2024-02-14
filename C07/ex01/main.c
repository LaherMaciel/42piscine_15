/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 22:58:43 by lawences          #+#    #+#             */
/*   Updated: 2024/02/13 18:03:17 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	*range;
	int	min;
	int	max;
	int	i;

	min = 0;
	max = 10;
	range = ft_range(min, max);
	i = -1;
	while (++i < (max - min))
		printf("%i\n", range[i]);
	free(range);
	return (0);
}
