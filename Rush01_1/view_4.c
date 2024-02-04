/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 00:01:33 by lawences          #+#    #+#             */
/*   Updated: 2024/02/04 03:33:19 by lawences         ###   ########.fr       */
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
		if (array[linha][0] == 4)
		{
			array[linha][1] = 1;
			array[linha][2] = 2;
			array[linha][3] = 3;
			array[linha][4] = 4;
		}
		linha++;
	}
	linha = 1;
	max_coluna = ft_strlen(array[0]);
	while (array[linha])
	{
		if (array[linha][max_coluna] == 4)
		{
			array[linha][1] = 4;
			array[linha][2] = 3;
			array[linha][3] = 2;
			array[linha][4] = 1;
		}
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
		if (array[0][coluna] == 4)
		{
			array[1][coluna] = 1;
			array[2][coluna] = 2;
			array[3][coluna] = 3;
			array[4][coluna] = 4;
		}
		coluna++;
	}
	coluna = 1;
	max_linha = ft_strlen(array[0]);
	while (array[0][coluna])
	{
		if (array[max_linha][coluna] == 4)
		{
			array[1][coluna] = 4;
			array[2][coluna] = 3;
			array[3][coluna] = 2;
			array[4][coluna] = 1;
		}
		coluna++;
	}
	return (array);
}
/* 
									   |
linha ->						coluna v
X	|	3	1	4	2	|	X
----|-------------------|----
2	|	0	0	0	0	|	3
3	|	0	0	0	0	|	1
2	|	0	0	0	0	|	2
1	|	0	0	0	0	|	2
----|-------------------|-----
X	|	1	3	2	2	|	X */