/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:16:58 by lawences          #+#    #+#             */
/*   Updated: 2024/02/15 16:24:04 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

int	main(int ac, char **av)
{
	t_stock_str	*my_struct;
	int			i;

	my_struct = ft_strs_to_tab(ac, av);
	ft_show_tab(my_struct);
	i = -1;
	while (my_struct[++i].str)
		free(my_struct[i].copy);
	free(my_struct);
	return (0);
}
