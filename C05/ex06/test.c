/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:04:14 by lawences          #+#    #+#             */
/*   Updated: 2024/02/15 02:24:00 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	ft_is_prime(int nb);
int	main(void)
{
	int	i;

	i = -100;
	while (++i < 200)
	{
		if (ft_is_prime(i) == 1 && i == 2)
			printf("%i", i);
		else if (ft_is_prime(i) == 1)
			printf(", %i", i);
	}
	printf(".\n");
	return (0);
}
