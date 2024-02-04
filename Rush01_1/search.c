/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 02:03:16 by lawences          #+#    #+#             */
/*   Updated: 2024/02/04 03:02:06 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	count_missing(int **array)
{
	int	missing;

	if (missing == 1)
	{
		
	}
}

/**
 * @brief find the index of the last value missing and put it
 *
 * It search through the array and see whitch lines and colunes don't have the
 * missing value
 * 
 * @param int **array - the array
 * @param int val_missing - the value missing
 * 
 * @return int **array
*/
int	**fill_search_last_colums(int **array, int val_missing, int coluna)
{
	int	linha;

	linha = 1;
	while (linha < 5)
	{
		if (array[linha][coluna] == val_missing)
				return (1);
		linha++;
	}
	return (0);
}

int	fill_search_last_lines(int **array, int val_missing, int linha)
{
	int	coluna;

	coluna = 1;
	while (coluna < 5)
	{
		if (array[linha][coluna] == val_missing)
				return (1);
		coluna++;
	}
	return (0);
}

int	**fill_last(int **array, int val_missing)
{
	int	linha_livre;
	int	coluna_livre;
	int	linha;
	int	coluna;

	linha = 1;
	linha_livre = 0;
	while (linha < 5)
	{
		coluna = 1;
		while (coluna < 5)
		{
			if (fill_search_last_line(array, val_missing, linha) == 0)
				linha_livre = linha;
			coluna++;
		}
		linha++;
	}
	if (linha_livre == 0)
		return (NULL);
	coluna = 1;
	coluna_livre = 0;
	while (coluna < 5)
	{
		linha = 1;
		while (linha < 5)
		{
			if (fill_search_last_colums(array, val_missing, coluna) == 0)
				coluna_livre = coluna;
			linha++;
		}
		coluna++;
	}
	if (coluna_livre == 0)
		return (NULL);
	array[linha_livre][coluna_livre] = val_missing;
	return (array);
}
