/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 23:32:25 by lawences          #+#    #+#             */
/*   Updated: 2024/02/15 22:28:53 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	long	i;

	i = INT_MIN + 10;
	while (i >= INT_MIN)
	{
		write(1, "bin	->	", 7);
		ft_putnbr_base(i, "01");
		write(1, "\n0	->	", 5);
		ft_putnbr_base(i, "");
		write(1, "\nocta	->	", 9);
		ft_putnbr_base(i, "poneyvif");
		write(1, "\ndec	->	", 8);
		ft_putnbr_base(i, "0123456789");
		write(1, "\nhex	->	", 8);
		ft_putnbr_base(i, "0123456789ABCDEF");
		write(1, "\n\n\n", 3);
		i--;
	}
	return (0);
}
