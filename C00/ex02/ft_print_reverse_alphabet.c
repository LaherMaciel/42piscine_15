/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <lawences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:42:40 by lawences          #+#    #+#             */
/*   Updated: 2024/01/23 17:15:49 by lawences         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	i;

	i = 123;
	while (--i >= 97)
		write (1, &i, 1);
}
