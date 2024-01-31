/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <lawences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:29:40 by lawences          #+#    #+#             */
/*   Updated: 2024/01/30 21:05:07 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	find_sizeof_join(char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	k;
	int	size_of_join;

	i = -1;
	while (strs[++i])
	{
		j = -1;
		while (strs[i][++j])
			size_of_join++;
		k = -1;
		if (i < size)
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
	int	l;

	i = -1;
	k = 0;
	while (strs[++i])
	{
		j = -1;
		while (strs[i][++j])
			join[k++] = strs[i][j];
		l = -1;
		if (i < size)
			while (sep[++l])
				join[k++] = sep[l];
	}
	join[k] = '\0';
	return (join);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;

	if (size == 0)
	{
		join = (char *) malloc(sizeof(char));
		if (!join)
			return (NULL);
		return (join);
	}
	join = (char *) malloc(find_sizeof_join(strs, sep, size) * sizeof(char));
	return (ft_join(strs, sep, join, size));
}
