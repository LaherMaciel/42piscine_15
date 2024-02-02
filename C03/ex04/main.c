/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:33:32 by lawences          #+#    #+#             */
/*   Updated: 2024/02/01 17:42:27 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	*str;
	char	*to_find;

	str = "Nos va vamos sair;";
	to_find = "vamos";
	printf("%s\n", ft_strstr(str, to_find));
	return (0);
}
