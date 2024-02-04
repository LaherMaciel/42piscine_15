/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 03:35:08 by lawences          #+#    #+#             */
/*   Updated: 2024/02/04 05:09:52 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/**
 * @brief
 * 
 * @param
 * @return
*/
void	free_splitted(char **splitted)
{
	int	i;

	if (!splitted)
		return ;
	i = -1;
	while (splitted[++i])
		free(splitted[i]);
	free(splitted);
}

/**
 * @brief
 * 
 * @param
 * @return
*/
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

/**
 * @brief
 * 
 * @param
 * @return
*/
char	**ft_splitter(char *str, char c, int **splitted)
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
		splitted[i] = (char *) malloc(6 * sizeof(int));
		if (!splitted[i])
			return (NULL);
		j = 0;
		while (str[str_index] && j < 5)
		{
			if ((j == 0 && (i == 0 || i == 5)
				&& (j == 5 && (i == 0 || i == 5))))
			{
				splitted[i][j++] = -1;
			}
			else if ((j >= 1 && j <= 5) && (i >= 1 && i <= 5))
			{
				splitted[i][j++] = 0;
			}
			else if (str[str_index] != c)
			{
				splitted[i][j++] = str[str_index] - '0';
				str_index++;
			}
			else
				str_index++;
		}
		while ((str[str_index] != c) && str[str_index] && j < 6)
		{
			if ((j == 0 && (i == 0 || i == 5)
				&& (j == 5 && (i == 0 || i == 5))))
			{
				splitted[i][j++] = -1;
			}
			else if ((j >= 1 && j <= 5) && (i >= 1 && i <= 5))
			{
				splitted[i][j++] = 0;
			}
			else
			{
				splitted[i][j++] = str[str_index] - '0';
				str_index++;
			}
		}
		splitted[i][j] = '\0';
		i++;
		str_index = ft_skip_or_find_c(str, c, str_index, 0);
	}
	splitted[i++] = NULL;
	return (splitted);
}

/**
 * @brief count the number of words
 * 
 * @param
 * @return
*/
int	count_words(char *str, char c)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			i = ft_skip_or_find_c(str, c, i, 0);
			words++;
		}
		else
			i++;
	}
	return (words);
}

/**
 * @brief
 * 
 * @param
 * @return
*/
char	**ft_split(char *str, char c)
{
	int	**splitted;

	if (!str)
		return (NULL);
	splitted = (char **) malloc(6 * sizeof(int *));
	if (!splitted)
		return (NULL);
	splitted = ft_splitter(str, c, splitted);
	if (!splitted)
		free(splitted);
	return (splitted);
}
