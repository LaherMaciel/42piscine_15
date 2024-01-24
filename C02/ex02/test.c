/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <lawences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 22:11:51 by lawences          #+#    #+#             */
/*   Updated: 2024/01/24 22:11:52 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	*str;

	str = "TEStKSADJALSD";
	printf("%i", ft_str_is_alpha(str));
	return (0);
}
