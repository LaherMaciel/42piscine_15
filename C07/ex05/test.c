/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <lawences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 23:53:48 by lawences          #+#    #+#             */
/*   Updated: 2024/01/31 00:16:22 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split(char *str, char c);
void	free_splitted(char **splitted);

int	main(void)
{
	char	**result;
	char	*str;
	char	delimiter;
	int		i;

	str = ",,,,,,,,,,,,,,,,";
	delimiter = ',';
	result = ft_split(str, delimiter);
	if (!result)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}
	i = 0;
	while (result[i])
	{
		printf("'%s'\n", result[i]);
		i++;
	}
	free_splitted(result);
	return (0);
}
