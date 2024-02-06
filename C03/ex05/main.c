/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:49:28 by lawences          #+#    #+#             */
/*   Updated: 2024/02/06 15:57:32 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	*src = "| src";
	char	dest[1000] = "dest |";
	int		i;

	i = ft_strlcat(dest, src, 2);
	printf("%d\n%s", i, dest);
	return (0);
}