/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validar_colunas.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 16:57:47 by lawences          #+#    #+#             */
/*   Updated: 2024/02/04 03:34:22 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);
int	find_index_coluna(int	val, int **array, int coluna);

int	val_start_4_coluna(int **array, int coluna)
{
	int	i;

	i = 1;
	while (i < 5)
	{
		if (array[i][coluna] != i)
			return (1);
		i++;
	}
	return (0);
}

int	val_start_3_coluna(int **array, int coluna)
{
	int	i;
	int	count;

	i = 1;
	count = 0;
	while (i < 5)
	{
		if (array[i][coluna] < array[i + 1][coluna])
			count++;
		i++;
	}
	if (count != 2)
		return (1);
	return (0);
}

int	val_start_2_coluna(int **array, int coluna)
{
	if (array[1][coluna] == 4)
		return (1);
	if (array[1][coluna] == 2 && find_index_coluna(4, array, coluna) > find_index_coluna(3, array, coluna))
		return (1);
	if (array[1][coluna] == 1 && array[coluna][1] != 4)
		return (1);
	return (0);
}

int	val_start_1_coluna(int **array, int coluna)
{
	if (array[1] != 4)
		return (1);
	return (0);
}

int	val_end_4_coluna(int **array, int coluna)
{
	int	i;
	int	j;

	i = 4;
	j = 1;
	while (i > 0)
	{
		if (array[i][coluna] != j)
			return (1);
		i--;
		j++;
	}
	return (0);
}

int	val_end_3_coluna(int **array, int coluna)
{
	int	i;
	int	count;

	i = 4;
	count = 0;
	while (i > 0)
	{
		if (array[i][coluna] < array[i + 1][coluna])
			count++;
		i--;
	}
	if (count != 2)
		return (1);
	return (0);
}

int	val_end_2_coluna(int **array, int coluna)
{
	if (array[4][coluna] == 4)
		return (1);
	if (array[4][coluna] == 2 && find_index_coluna(4, array, coluna) < find_index_coluna(3, array, coluna))
		return (1);
	if (array[4][coluna] == 1 && array[coluna][3] != 4)
		return (1);
	return (0);
}

int	val_end_1_coluna(int **array, int coluna)
{
	if (array[4] != 4)
		return (1);
	return (0);
}