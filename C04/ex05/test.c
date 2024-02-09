/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:25:06 by lawences          #+#    #+#             */
/*   Updated: 2024/02/09 05:08:50 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	printf("%i\n", ft_atoi_base("C7", "0123456789ABCDEF"));
	printf("%i\n", ft_atoi_base("199", "0123456789"));
	printf("%i\n", ft_atoi_base("11000111", "01"));
	printf("%i\n", ft_atoi_base("E0", "0123456789ABCDEF"));
	printf("%i\n", ft_atoi_base("224", "0123456789"));
	printf("%i\n", ft_atoi_base("11100000", "01"));
	printf("%i\n", ft_atoi_base("ajo", "joai"));
	printf("%i\n", ft_atoi_base("201", "0123"));
	printf("%i\n", ft_atoi_base("201", NULL));
	return (0);
}
