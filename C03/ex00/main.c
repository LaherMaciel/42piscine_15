/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 13:51:59 by lawences          #+#    #+#             */
/*   Updated: 2024/01/27 14:01:20 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int	main(void)
{
	printf("%i\n", strcmp("1234", "1235"));
	printf("%i\n", ft_strcmp("1234", "1235"));
	return (0);
}
