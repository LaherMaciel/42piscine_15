/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <lawences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:29:36 by lawences          #+#    #+#             */
/*   Updated: 2024/02/13 16:05:04 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;

	if (min >= max)
	{
		*range = NULL;
		return (-1);
	}
	*range = malloc((max - min) * sizeof(int));
	if (!range)
		return (-1);
	i = min - 1;
	j = 0;
	while (++i < max)
	{
		(*range)[j] = i;
		j++;
	}
	return (j);
}
