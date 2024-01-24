/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <lawences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 21:47:09 by lawences          #+#    #+#             */
/*   Updated: 2024/01/24 21:54:00 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	src[40];
	char	dest[12];

	memset(dest, '\0', sizeof(dest));
	strcpy(src, "TRYING THIS INPUT;");
	ft_strncpy(dest, src, 5);
	printf("Final copied string : %s\n", dest);
	strcpy(src, "TRYING THIS INPUT;");
	ft_strncpy(dest, src, 10);
	printf("Final copied string : %s\n", dest);
	strcpy(src, "TRYING THIS INPUT;");
	ft_strncpy(dest, src, 50);
	printf("Final copied string : %s\n", dest);
	return (0);
}
