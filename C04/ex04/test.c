/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 23:32:25 by lawences          #+#    #+#             */
/*   Updated: 2024/02/09 05:15:34 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	long	i;

	i = -2147483648;
	while (++i <= 10)
	{
		write(1, "->	", 3);
		ft_putnbr_base(i, "01");
		write(1, "->	", 3);
		ft_putnbr_base(i, "");
		write(1, "\n->	", 4);
		ft_putnbr_base(i, "poneyvif");
		write(1, "\n->	", 4);
		ft_putnbr_base(i, "0123456789");
		write(1, "\n->	", 4);
		ft_putnbr_base(i, "0123456789ABCDEF");
		write(1, "\n\n", 2);
	}
	return (0);
}
