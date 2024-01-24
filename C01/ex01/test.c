/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <lawences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 01:44:07 by lawences          #+#    #+#             */
/*   Updated: 2024/01/24 02:37:34 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

void	aux(int *****point5)
{
	int	******point6;
	int	*******point7;
	int	********to_test;

	point6 = &point5;
	point7 = &point6;
	to_test = &point7;
	printf("in -> %i\n", ********to_test);
	ft_ultimate_ft(&to_test);
	printf("out -> %i\n", ********to_test);
}

int	main(void)
{
	int	value;
	int	*point1;
	int	**point2;
	int	***point3;
	int	****point4;

	value = 1332;
	point1 = &value;
	point2 = &point1;
	point3 = &point2;
	point4 = &point3;
	aux(&point4);
	return (0);
}
