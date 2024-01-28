/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <lawences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 21:05:04 by lawences          #+#    #+#             */
/*   Updated: 2024/01/28 12:25:17 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char			src[] = "1234567890";
	char			dest[1000];
	unsigned int	copied_len;

	copied_len = ft_strlcpy(dest, src, 6);
	printf("%s\n", dest);
	printf("Length of copied string: %u\n", copied_len);
	return (0);
}
