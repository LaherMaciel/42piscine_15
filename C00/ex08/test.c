/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <lawences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:31:06 by lawences          #+#    #+#             */
/*   Updated: 2024/01/28 12:13:30 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_combn(int n);

int	main(void)
{
	int	i;

	i = -1;
	while (++i <= 10)
	{
		write (1, "->	", 3);
		ft_print_combn(i);
		write(1, "\n\n", 2);
	}
	return (0);
}
