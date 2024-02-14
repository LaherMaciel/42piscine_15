/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:49:28 by lawences          #+#    #+#             */
/*   Updated: 2024/02/13 21:37:54 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	*src = "123";
	char	dest[1000] = "12345678";
	int		i;

	i = ft_strlcat(dest, src, 2);
	printf("%d	->	%s\n", i, dest);

	char	*src1 = "123";
	char	dest1[1000] = "12345678";
	int		i1;

	i1 = strlcat(dest1, src1, 2);
	printf("%d	->	%s\n", i1, dest1);
	return (0);
}