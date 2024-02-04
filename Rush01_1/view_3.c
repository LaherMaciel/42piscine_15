/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 00:44:49 by lawences          #+#    #+#             */
/*   Updated: 2024/02/04 01:46:02 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// !linha
int	*fill_linha_val4_3_stare_2(int **array)
{
	int	linha;

	linha = 0;
	while (array[linha])
	{
		if (array[linha][3] == 4)
		{
			if (array[linha][4] + array[linha][3] == 5)
			{
				array[linha][1] = 2;
				array[linha][2] = 3;
			}
			if (array[linha][4] + array[linha][3] == 6)
			{
				array[linha][1] = 1;
				array[linha][2] = 3;
			}
			if (array[linha][4] + array[linha][3] == 7)
			{
				array[linha][1] = 1;
				array[linha][2] = 2;
			}
		}
		if (array[linha][2] == 4)
		{
			if (array[linha][1] + array[linha][2] == 5)
			{
				array[linha][4] = 2;
				array[linha][3] = 3;
			}
			if (array[linha][1] + array[linha][2] == 6)
			{
				array[linha][4] = 1;
				array[linha][3] = 3;
			}
			if (array[linha][1] + array[linha][2] == 7)
			{
				array[linha][4] = 1;
				array[linha][3] = 2;
			}
		}
		linha++;
	}
}

// !coluna
int	*fill_coluna_val4_3_stare_2(int **array)
{
	int	coluna;
	
	coluna = 0;
	while (array[0][coluna])
	{
		if (array[3][coluna] == 4)
		{
			if (array[4][coluna] + array[3][coluna] == 5)
			{
				array[1][coluna] = 2;
				array[2][coluna] = 3;
			}
			if (array[4][coluna] + array[3][coluna] == 6)
			{
				array[1][coluna] = 1;
				array[2][coluna] = 3;
			}
			if (array[4][coluna] + array[3][coluna] == 7)
			{
				array[1][coluna] = 1;
				array[2][coluna] = 2;
			}
		}
		if (array[2][coluna] == 4)
		{
			if (array[1][coluna] + array[2][coluna] == 5)
			{
				array[4][coluna] = 2;
				array[3][coluna] = 3;
			}
			if (array[1][coluna] + array[2][coluna] == 6)
			{
				array[4][coluna] = 1;
				array[3][coluna] = 3;
			}
			if (array[1][coluna] + array[2][coluna] == 7)
			{
				array[4][coluna] = 1;
				array[3][coluna] = 2;
			}
		}
		coluna++;
	}
}

int	**fill_start_coluna_3(int **array)
{
	int	coluna;
	int	linha_max;

	coluna = 0;
	linha_max = ft_strlen(linha_max);
	while (array[0][coluna])
	{
		// encontrar o resto.......
		if (array[0][coluna] == 3 && array[4][coluna] < 3
			&& array[1][coluna] > 2)
		{
			array[2][coluna] = ;
			array[3][coluna] = ;
		}
		else if (array[linha_max][coluna] == 3 && array[4][coluna] < 3
			&& array[1][coluna] > 2)
		{
			array[2][coluna] = ;
			array[3][coluna] = ;
		}
		coluna++;
	}
	return (array);
}

int	**a3_stare2(int **array)
{
	int	linha;
	int	coluna_max;


	coluna_max = 0;
	while (array[0][coluna_max])
		coluna_max++;
	linha = 0;
	while (array[linha])
	{
		if (array[linha][0] == 3 && array[linha][coluna_max] == 2)
			array[linha][3] = 4;
		if (array[linha][0] == 2 && array[linha][coluna_max] == 3)
			array[linha][2] = 4;
	}
	return (array);
}

int	**a2_stare3(int **array)
{
	int	coluna;
	int	linha_max;


	linha_max = 0;
	while (array[0][linha_max])
		linha_max++;
	coluna = 0;
	while (array[coluna])
	{
		if (array[0][coluna] == 3 && array[linha_max][coluna] == 2)
			array[3][coluna] = 4;
		if (array[0][coluna] == 2 && array[linha_max][coluna] == 3)
			array[2][coluna] = 4;
	}
	return (array);
}
