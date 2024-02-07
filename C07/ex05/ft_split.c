/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 21:53:50 by lawences          #+#    #+#             */
/*   Updated: 2024/02/06 23:19:39 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_skip_or_find_c(char *str, char c, int i, int skip_or_find)
{
	if (skip_or_find == 0)
		while (str[i] == c && str[i])
			i++;
	else if (skip_or_find == 1)
		while (str[i] != c && str[i])
			i++;
	return (i);
}

char	**ft_splitter(char *str, char c, char **splitted)
{
	int	str_index;
	int	next_c;
	int	i;
	int	j;

	str_index = ft_skip_or_find_c(str, c, 0, 0);
	i = 0;
	while (str[str_index])
	{
		next_c = ft_skip_or_find_c(str, c, str_index, 1);
		splitted[i] = (char *) malloc((next_c
					- str_index + 1) * sizeof(char));
		if (!splitted[i])
			return (NULL);
		j = 0;
		while ((str[str_index] != c) && str[str_index])
		{
			splitted[i][j++] = str[str_index];
			str_index++;
		}
		splitted[i][j] = '\0';
		str_index = ft_skip_or_find_c(str, c, str_index, 0);
	}
	splitted[i++] = NULL;
	return (splitted);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	word;

	word = 0;
	i = ft_skip_or_find_c(str, charset, i, 0);
	if (str[i])
		word = 1;
	while (str[i])
	{
		if (str[i] == charset[0])
		{
			i = ft_skip_or_find_c(str, charset, i, 0);
			word++;
		}
		else
			i++;
	}
	return (word + 1);
}

char	**ft_split(char *str, char c)
{
	char	**splitted;
	int		nb_of_words;

	if (!str)
		return (NULL);
	nb_of_words = count_words(str, charset);
	splitted = (char **) malloc((nb_of_words + 1) * sizeof(char *));
	if (!splitted)
		return (NULL);
	splitted = ft_splitter(str, charset, splitted);
	if (!splitted)
		free(splitted);
	return (splitted);
}
