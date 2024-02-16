/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 19:24:52 by lawences          #+#    #+#             */
/*   Updated: 2024/02/15 19:26:21 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

void	aux(void)
{
	char	*nbr;

	nbr = ft_convert_base("", "0123456789", "ABCDefghijklmnopqrstuvwxyz");
	printf("%s\n", nbr);
	if (nbr)
		free(nbr);
	nbr = ft_convert_base(" -------423-432-31-3312", "0123456789",
			"0123456789");
	printf("%s\n", nbr);
	if (nbr)
		free(nbr);
	nbr = ft_convert_base("     ", "0123456789", "0123456789");
	printf("%s\n", nbr);
	if (nbr)
		free(nbr);
	nbr = ft_convert_base("0", "0123456789", "0123456789");
	printf("%s\n", nbr);
	if (nbr)
		free(nbr);
	nbr = ft_convert_base("12963", "0123456789", "+0123456789");
	printf("%s\n", nbr);
	if (nbr)
		free(nbr);
	nbr = ft_convert_base("\0", "0123456789", "0123456789");
	printf("%s\n", nbr);
	if (nbr)
		free(nbr);
}

int	main(void)
{
	char	*nbr;

	aux();
	nbr = ft_convert_base("", "0123456789", "0123456789");
	printf("%s\n", nbr);
	if (nbr)
		free(nbr);
	/* nbr = ft_convert_base(NULL, "0123456789", "0123456789");
	printf("%s\n", nbr);
	if (nbr)
		free(nbr);  */
	nbr = ft_convert_base(" 4-------423-432-31-3312",
			"0123456789", "0123456789");
	printf("%s\n", nbr);
	if (nbr)
		free(nbr);
	nbr = ft_convert_base("42", "0123456789", "01");
	printf("%s\n", nbr);
	if (nbr)
		free(nbr);
	return (0);
}
