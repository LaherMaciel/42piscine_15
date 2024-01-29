/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:21:22 by lawences          #+#    #+#             */
/*   Updated: 2024/01/29 11:28:33 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	*array;

	if (min >= max)
		return (NULL);
	array = malloc((max - min) * sizeof(int));
	if (!array)
		return (NULL);
	i = min - 1;
	j = 0;
	while (++i < max)
	{
		array[j] = i;
		j++; 
	}
	return (array);
}
