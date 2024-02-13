/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:29:40 by lawences          #+#    #+#             */
/*   Updated: 2024/02/13 00:56:17 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#define malloc(...) NULL

int	find_sizeof_join(char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	k;
	int	size_of_join;

	i = -1;
	size_of_join = 0;
	while (strs[++i])
	{
		j = -1;
		while (strs[i][++j])
			size_of_join++;
		k = -1;
		if (i < size - 1 && strs[i + 1])
			while (sep[++k])
				size_of_join++;
	}
	size_of_join++;
	return (size_of_join);
}

char	*ft_join(char **strs, char *sep, char *join, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (strs[i])
	{
		j = 0;
		while (strs[i][j])
		{
			join[k] = strs[i][j];
			k++;
			j++;
		}
		if (i < size - 1 && strs[i + 1])
		{
			j = 0;
			while (sep[j])
			{
				join[k] = sep[j];
				k++;
				j++;
			}
		}
		i++;
	}
	join[k] = '\0';
	return (join);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;

	if (size == 0)
	{
		join = malloc(sizeof(char));
		if (!join)
			return (NULL);
		return (join);
	}
	join = malloc(find_sizeof_join(strs, sep, size) * sizeof(char));
	if (!join)
		return (NULL);
	return (ft_join(strs, sep, join, size));
}
