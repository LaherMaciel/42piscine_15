/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view_1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 00:00:43 by lawences          #+#    #+#             */
/*   Updated: 2024/02/04 03:33:14 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

int	fill_linha_start_4(int **array)
{
	int	linha;
	int	max_coluna;
	
	linha = 1;
	while (array[linha])
	{
		if (array[linha][0] == 1)
			array[linha][1] = 4;
		linha++;
	}
	linha = 1;
	max_coluna = ft_strlen(array[0]);
	while (array[linha])
	{
		if (array[linha][max_coluna] == 1)
			array[linha][4] = 4;
		linha++;
	}
	return (array);
}

int	fill_coluna_start_4(int **array)
{
	int	coluna;
	int	max_linha;
	
	coluna = 1;
	while (array[0][coluna])
	{
		if (array[0][coluna] == 1)
			array[1][coluna] = 4;
		coluna++;
	}
	coluna = 1;
	max_linha = ft_strlen(array[0]);
	while (array[coluna])
	{
		if (array[max_linha][coluna] == 1)
			array[4][coluna] = 4;
		coluna++;
	}
	return (array);
}
