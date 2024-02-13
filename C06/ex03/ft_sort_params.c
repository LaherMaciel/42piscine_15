/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 20:29:03 by lawences          #+#    #+#             */
/*   Updated: 2024/02/12 22:56:52 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	**ft_swap(char **argv, int i, int j)
{
	char	*temp;

	temp = argv[i];
	argv[i] = argv[j];
	argv[j] = temp;
	return (argv);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] || s1[i])
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc == 1)
		return (0);
	i = 0;
	while (argv[++i])
	{
		j = -1;
		while (argv[++j])
			if (ft_strcmp(argv[i], argv[j]) == -1)
				argv = ft_swap(argv, i, j);
	}
	i = 0;
	while (argv[++i])
	{
		j = -1;
		while (argv[i][++j])
			write(1, &argv[i][j], 1);
		write(1, "\n", 1);
	}
	return (0);
}
