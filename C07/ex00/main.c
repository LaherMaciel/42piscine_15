/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:57:21 by lawences          #+#    #+#             */
/*   Updated: 2024/02/13 17:59:46 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

int	main(void)
{
	int		i;
	char	*dest;
	char	*src;

	i = 0;
	src = "new info";
	dest = ft_strdup(src);
	printf("%s\n", dest);
	free(dest);
	return (0);
}
