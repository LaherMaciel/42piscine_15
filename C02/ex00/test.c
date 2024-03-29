/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 21:35:17 by lawences          #+#    #+#             */
/*   Updated: 2024/02/06 14:25:10 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char dest[] = "failed";

	printf("dest = %s\n", ft_strcpy(dest, "succes"));
	printf("dest = %s\n", dest);
	return (0);
}
/* 
int	main(void)
{
	char	*dest;

	dest = (char *) malloc(15 * sizeof(char));
	dest = ft_strcpy(dest, "test");
	printf("%s\n", dest);
	free(dest);
	return (0);
}
 */