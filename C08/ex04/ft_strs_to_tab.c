/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:41:40 by lawences          #+#    #+#             */
/*   Updated: 2024/02/15 17:00:22 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dup;

	if (!src)
		return (NULL);
	i = 0;
	while (src[i])
		i++;
	dup = malloc ((i + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	i = -1;
	while (src[++i])
		dup[i] = src[i];
	dup[i] = '\0';
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*my_struct;
	int			i;

	my_struct = malloc((ac + 1) * sizeof(t_stock_str));
	if (!my_struct)
		return (NULL);
	i = -1;
	while (++i < ac)
	{
		my_struct[i].size = ft_strlen(av[i]);
		my_struct[i].str = av[i];
		my_struct[i].copy = ft_strdup(av[i]);
		if (!my_struct[i].copy)
		{
			while (--i >= 0)
				free(my_struct[i].copy);
			free(my_struct);
			return (NULL);
		}
	}
	my_struct[i].str = 0;
	return (my_struct);
}
