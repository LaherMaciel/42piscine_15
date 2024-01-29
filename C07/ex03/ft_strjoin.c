/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:29:40 by lawences          #+#    #+#             */
/*   Updated: 2024/01/29 19:20:30 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	find_sizeof_join(char **strs)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	while (strs[i])
	{
		j = 0;
		while (strs[i][j])
		{
			size++;
			j++;
		}
		size++;
		i++;
	}
	size++;
	return (size);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	char	*join;

	join = (char *) malloc(find_sizeof_join(strs) * sizeof(char));
	i = 0;
	while (strs[i])
	{
		
	}
}
