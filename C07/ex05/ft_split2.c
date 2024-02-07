/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 22:29:03 by lawences          #+#    #+#             */
/*   Updated: 2024/02/06 23:30:51 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchar(char c, char *charset)
{
	int	j;

	j = -1;
	while (charset[++j])
		if (c == charset[j])
			return (-1);
	return (0);
}

/**
 * @brief function ment to skip or find the special characters used as
 * separators of the function split
 *
 * @param char* the source string
 * @param char* used as a separator for the split
 * @param int the current index of the str
 * @param int the commend that set if the function will find or skip the special
 * characters used to split the src string
 *
 * @return int i - returns the new index after skipping or finding the separator
*/
int	ft_skip_or_find_charset(char *str, char *charset,
		int i, int skip_or_find)
{
	if (skip_or_find == 0)
		while (ft_strchar(str[i], charset) == -1
			&& str[i])
			i++;
	else if (skip_or_find == 1)
		while (ft_strchar(str[i], charset) == 0
			&& str[i])
			i++;
	return (i);
}

char	**ft_splitter(char *str, char *charset, char **split)
{
	int	index;
	int	i;
	int	j;

	index = ft_skip_or_find_c(str, charset, 0, 0);
	i = 0;
	while (str[index])
	{
		j = ft_skip_or_find_c(str, charset, index, 1);
		split[i] = (char *) malloc((j
					- index + 1) * sizeof(char));
		if (!split[i])
			return (NULL);
		j = 0;
		while ((ft_strchar(str[index], charset) != -1)
			&& str[index])
		{
			split[i][j++] = str[index];
			index++;
		}
		split[i][j] = '\0';
		index = ft_skip_or_find_c(str, charset, index, 0);
	}
	split[i++] = NULL;
	return (split);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		word;
	char	**splitted;

	if (!str)
		return (NULL);

	word = 0;
	i = 0;
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
	nb_of_words = count_words(str, charset);
	splitted = (char **) malloc((nb_of_words + 1) * sizeof(char *));
	if (!splitted)
		return (NULL);
	splitted = ft_splitter(str, charset, splitted);
	if (!splitted)
		free(splitted);
	return (splitted);
}
