/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:49:28 by lawences          #+#    #+#             */
/*   Updated: 2024/02/07 00:26:56 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	*src = "123";
	char	dest[1000] = "12345678";
	int		i;

	i = ft_strlcat(dest, src, 4);
	printf("%d\n%s", i, dest);
	return (0);
}