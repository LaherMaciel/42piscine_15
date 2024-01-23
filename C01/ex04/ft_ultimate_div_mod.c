/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <lawences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 18:36:26 by lawences          #+#    #+#             */
/*   Updated: 2024/01/23 18:39:59 by lawences         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int c;

    c = *a;
    *a = c / *b;
    *b = c % *b;
}

int	main(void)
{
	int	a;
	int	b;

	a = 250;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	printf("a = %i\nb = %i\n", a, b);
	return (0);
}