/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 01:38:58 by lawences          #+#    #+#             */
/*   Updated: 2024/02/04 03:33:05 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

// !linha
int	*fill_linha_val4_2_stare_2(int **array)
{
	int	linha;

	linha = 0;
	while (array[linha])
	{
		if (array[linha][3] == 4)
		{
			if (array[linha][4] + array[linha][3] == 5)
			{
				array[linha][1] = 3;
				array[linha][2] = 2;
			}
			if (array[linha][4] + array[linha][3] == 6)
			{
				array[linha][1] = 3;
				array[linha][2] = 1;
			}
			if (array[linha][4] + array[linha][3] == 7)
			{
				array[linha][1] = 2;
				array[linha][2] = 1;
			}
		}
		if (array[linha][2] == 4)
		{
			if (array[linha][1] + array[linha][2] == 5)
			{
				array[linha][4] = 3;
				array[linha][3] = 2;
			}
			if (array[linha][1] + array[linha][2] == 6)
			{
				array[linha][4] = 3;
				array[linha][3] = 1;
			}
			if (array[linha][1] + array[linha][2] == 7)
			{
				array[linha][4] = 2;
				array[linha][3] = 1;
			}
		}
		linha++;
	}
}

// !coluna
int	*fill_coluna_val4_2_stare_3(int **array)
{
	int	coluna;
	
	coluna = 0;
	while (array[0][coluna])
	{
		if (array[3][coluna] == 4)
		{
			if (array[4][coluna] + array[3][coluna] == 5)
			{
				array[1][coluna] = 3;
				array[2][coluna] = 2;
			}
			if (array[4][coluna] + array[3][coluna] == 6)
			{
				array[1][coluna] = 3;
				array[2][coluna] = 1;
			}
			if (array[4][coluna] + array[3][coluna] == 7)
			{
				array[1][coluna] = 2;
				array[2][coluna] = 1;
			}
		}
		if (array[2][coluna] == 4)
		{
			if (array[1][coluna] + array[2][coluna] == 5)
			{
				array[4][coluna] = 3;
				array[3][coluna] = 2;
			}
			if (array[1][coluna] + array[2][coluna] == 6)
			{
				array[4][coluna] = 3;
				array[3][coluna] = 1;
			}
			if (array[1][coluna] + array[2][coluna] == 7)
			{
				array[4][coluna] = 2;
				array[3][coluna] = 1;
			}
		}
		coluna++;
	}
}

// !linha
int	*fill_linha_val4_2_stare_2(int **array)
{
	int	linha;

	linha = 0;
	while (array[linha])
	{
		if (array[linha][4] == 4)
			array[linha][1] = 3;
		if (array[linha][1] == 4)
			array[linha][4] = 3;
		linha++;
	}
}

// !coluna
int	*fill_coluna_val4_2_stare_2(int **array)
{
	int	coluna;
	
	coluna = 0;
	while (array[0][coluna])
	{
		if (array[4][coluna] == 4)
			array[1][coluna] = 3;
		if (array[1][coluna] == 4)
			array[4][coluna] = 3;
		coluna++;
	}
}
