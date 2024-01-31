/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <lawences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 21:43:59 by lawences          #+#    #+#             */
/*   Updated: 2024/01/28 12:28:49 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	*src;
	char	*dest;

	src = malloc(1000 * sizeof(char));
	dest = malloc(1000 * sizeof(char));
	if (src == NULL || dest == NULL)
	{
		fprintf(stderr, "Memory allocation failed\n");
		return (1);
	}
	strcpy(src, "SRC INFO");
	strcpy(dest, "DEST INFO");
	ft_strncat(dest, src, 6);
	printf("%s\n", dest);
	free(src);
	free(dest);
	return (0);
}
