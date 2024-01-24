/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <lawences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 01:44:07 by lawences          #+#    #+#             */
/*   Updated: 2024/01/24 02:45:43 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 250;
	b = 10;
	ft_ultimate_div_mod(a, b, &div, &mod);
	printf("a = %i b = %i\ndiv = %i mod = %i", a, b, div, mod);
	return (0);
}
