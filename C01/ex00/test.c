/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <lawences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 01:44:07 by lawences          #+#    #+#             */
/*   Updated: 2024/01/24 02:17:18 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	i;

	i = 1332;
	printf("in -> %i\n", i);
	ft_ft(&i);
	printf("out -> %i\n", i);
	return (0);
}
