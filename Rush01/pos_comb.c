/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pos_comb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 22:16:11 by lawences          #+#    #+#             */
/*   Updated: 2024/02/03 22:24:29 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	**possible_combs_1(int end, int comb_number)
{
	int	*combs;

	combs = malloc(5 * sizeof(int));
	if (end == 2)
	{
		if (comb_number == 1)
			combs = {1, 3, 4, 2};
		else
			combs = {1, 4, 3, 2};
	}
	else if (end == 3)
	{
		if (comb_number == 1)
			combs = {1, 2, 4, 3};
		else
			combs = {1, 4, 2, 3};
	}
	else
	{
		if (comb_number == 1)
			combs = {1, 2, 3, 4};
		else
			combs = {1, 3, 2, 4};
	}
	return (combs);
}

int	**possible_combs_2(int end, int comb_number)
{
	int	*combs;

	combs = malloc(5 * sizeof(int));
	if (end == 1)
	{
		if (comb_number == 1)
			combs = {2, 3, 4, 1};
		else
			combs = {2, 4, 3, 1};
	}
	else if (end == 3)
	{
		if (comb_number == 1)
			combs = {2, 1, 4, 3};
		else
			combs = {2, 4, 1, 3};
	}
	else
	{
		if (comb_number == 1)
			combs = {2, 3, 1, 4};
		else
			combs = {2, 1, 3, 4};
	}
	return (combs);
}

int	**possible_combs_3(int end, int comb_number)
{
	int	*combs;

	combs = malloc(5 * sizeof(int));
	if (end == 1)
	{
		if (comb_number == 1)
			combs = {3, 2, 4, 1};
		else
			combs = {3, 4, 2, 1};
	}
	else if (end == 2)
	{
		if (comb_number == 1)
			combs = {3, 1, 4, 2};
		else
			combs = {3, 4, 1, 2};
	}
	else
	{
		if (comb_number == 1)
			combs = {3, 1, 2, 4};
		else
			combs = {3, 2, 1, 4};
	}
	return (combs);
}

int	**possible_combs_4(int end, int comb_number)
{
	int	*combs;

	combs = malloc(5 * sizeof(int));
	if (end == 1)
	{
		if (comb_number == 1)
			combs = {4, 2, 3, 1};
		else
			combs = {4, 3, 2, 1};
	}
	else if (end == 2)
	{
		if (comb_number == 1)
			combs = {4, 1, 3, 2};
		else
			combs = {4, 3, 1, 2};
	}
	else
	{
		if (comb_number == 1)
			combs = {4, 1, 2, 3};
		else
			combs = {4, 2, 1, 3};
	}
	return (combs);
}
