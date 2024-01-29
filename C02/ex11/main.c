/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <lawences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:58:45 by lawences          #+#    #+#             */
/*   Updated: 2024/01/28 16:04:15 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	write(1, "\n", 1);
	return (0);
}
