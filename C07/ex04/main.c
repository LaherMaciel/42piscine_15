/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 19:24:52 by lawences          #+#    #+#             */
/*   Updated: 2024/02/14 19:51:38 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(void)
{
	char	*nbr;

	nbr = ft_convert_base("-10234", "0123456789", "01");
	printf("%s\n\n", nbr);
	free(nbr);
	nbr = ft_convert_base("10234", "0123456789", "01");
	printf("%s\n", nbr);
	free(nbr);
	return (0);
}
