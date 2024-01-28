/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <lawences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:22:37 by lawences          #+#    #+#             */
/*   Updated: 2024/01/28 12:15:21 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>

void	ft_putnbr(int nb);

int	main(void)
{
	int	i;

	i = -2147483648;
	ft_putnbr(i);
	printf("\n");
	i = -21;
	ft_putnbr(i);
	printf("\n");
	i = INT_MAX;
	ft_putnbr(i);
	return (0);
}
