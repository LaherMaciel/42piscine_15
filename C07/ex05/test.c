/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 23:53:48 by lawences          #+#    #+#             */
/*   Updated: 2024/02/15 19:27:16 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char *str, char *charset);

void	free_splitted(char **splitted)
{
	int	i;

	i = -1;
	while (splitted[++i])
		free(splitted[i]);
	free(splitted);
}

int	main(void)
{
	char	**result;
	char	*str;
	char	*delimiter;
	int		i;

	str = "<Test>,/this_+.:function!@#$^&*()_+;and[it]->{works}";
	delimiter = ",./?;:-_=+!@#$<>^&*( )[]{}";
	result = ft_split(str, delimiter);
	if (!result)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}
	i = -1;
	while (result[++i])
		printf("%s\n", result[i]);
	free_splitted(result);
	return (0);
}
