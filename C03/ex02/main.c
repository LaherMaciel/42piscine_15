/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:49:13 by lawences          #+#    #+#             */
/*   Updated: 2024/01/27 21:48:51 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int main(void)
{
	char *src;
	char *dest;

	src = malloc(1000 * sizeof(char));
	dest = malloc(1000 * sizeof(char));
	if (src == NULL || dest == NULL) {
		fprintf(stderr, "Memory allocation failed\n");
		return 1;
	}
	strcpy(src, "SRC INFO");
	strcpy(dest, "DEST INFO");
	ft_strcat(dest, src);
	printf("%s\n", dest);
	free(src);
	free(dest);

	return 0;
}