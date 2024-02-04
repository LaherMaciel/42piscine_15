/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 19:29:10 by lawences          #+#    #+#             */
/*   Updated: 2024/02/04 02:02:05 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	find_index_linha(int	val, int **array, int linha)
{
	int	i;

	i = 1;
	while (array[linha][i] && i < 5)
	{
		if (array[linha][i] == val)
			return (i);
		i++;
	}
}

int	find_index_coluna(int	val, int **array, int coluna)
{
	int	i;

	i = 1;
	while (array[i][coluna] && i < 5)
	{
		if (array[i][coluna] == val)
			return (i);
		i++;
	}
}

int	**fill_linha(int **array, int linha)
{
	int	coluna;
	int	soma;
	int	to_fill;
	int	i;

	coluna = 0;
	soma = 0;
	i = 0;
	while (array[linha][coluna])
	{
		soma = soma + array[linha][coluna];
		if (array[linha][coluna] == 0)
			to_fill = coluna;
		coluna++;
	}
	array[linha][to_fill] = 10 - soma;
	return (array);
}

int	**fill_coluna(int **array, int coluna)
{
	int	linha;
	int	soma;
	int	to_fill;
	int	i;

	linha = 0;
	soma = 0;
	i = 0;
	while (array[linha][coluna])
	{
		soma = soma + array[linha][coluna];
		if (array[linha][coluna] == 0)
			to_fill = linha;
		linha++;
	}
	array[to_fill][coluna] = 10 - soma;
	return (array);
}
