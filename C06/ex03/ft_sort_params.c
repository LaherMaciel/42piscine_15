/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 20:29:03 by lawences          #+#    #+#             */
/*   Updated: 2024/02/02 13:01:43 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	find_next_smallest(char **argv, int smallest)
{
	int	current_min;
	int	next_smallest;

	next_smallest = 0;
	current_min = 0;
	while (argv[++current_min])
	{
		if (ft_strcmp(argv[next_smallest], argv[current_min]) == 1
				&& ft_strcmp(argv[current_min], argv[smallest] == -1))
		{
			next_smallest = current_min;
		}
	}
	return (next_smallest);
}

int	find_smallest(char **argv)
{
	int	current_min;
	int	smallest;

	smallest = 0;
	current_min = 0;
	while (argv[++current_min])
	{
		if (ft_strcmp(argv[smallest], argv[current_min]) == 1)
			smallest = current_min;
	}
	return (smallest);
}

int	sort_order(char **argv)
{
	int	i;

	i = 0;
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
		while (argv[i][++j])
			write(1, &argv[i][j], 1);
		write(1, "\n", 1);
	}
	return (0);
}
