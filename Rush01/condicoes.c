/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   condicoes.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 19:32:34 by lawences          #+#    #+#             */
/*   Updated: 2024/02/03 22:22:54 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

/**
 * ! coluna 1
 * if (coluna == 1)
 * 		val[0] == 4;
 * 
 * ! coluna 2
 * if (coluna == 2 && val[0] == 2 && val[2] == 4 && val[0] != 4)
 * 		val[1] = 1;
 * 		val[3] = 3;
 * if (coluna == 2 && val[1] == 4 && val[3] == 2 && val[0] != 4)
 * 		val[0] = 1;
 * 		val[2] = 3;
 * if (coluna == 2 && val[2] == 4 && val[3] == 1)
 * 		val[0] = 3;
 * 		val[1] = 2;
 * if (coluna == 2 && val[0] == 3)
 * 		val[1] = 4;
 * 
 * ! coluna 3
 * if (coluna == 3 && val[2] == 3 && val[3] == 4)
 * 		val[0] = 2;
 * 		val[1] = 1;
 * if (coluna == 3 && val[2] == 4 && val[3] == 1)
 * 		val[0] = 2;
 * 		val[1] = 3;
 *if (coluna == 3 && val[0] == 1 && val[3] == 4)
		val[1] = 3;
		val[2] = 2;
 *if (coluna == 3 && val[0] == 2 && val[2] == 4)
		val[1] = 3;
		val[3] = 1;
 *if (coluna == 3 && val[3] == 3 && val[2] == 4)
		val[1] = 2;
		val[0] = 1;
 * 
 * ! coluna 4
 * if (coluna == 4)
 * 		val[0] = 1;
 * 		val[1] = 2;
 * 		val[2] = 3;
 * 		val[3] = 4;
 * 		val[3] = 1;
 * 
 * ! coluna 1 - 2 - 3
 * if (coluna1 == 1, coluna2 == 3 && coluna3 == 2 && coluna4 != 2)
 * 		val[0] = 4;
 * 		val[1] = 2;
 * 		val[2] = 3;
 * 		val[3] = 1;
 * if (coluna1 == 1, coluna2 == 3 && coluna3 == 2 && coluna4 == 2)
 * 		val[0] = 4;
 * 		val[1] = 1;
 * 		val[2] = 2;
 * 		val[3] = 3;
 * 
 * ! number of vals
 * if (nbr_of_val == 3)
 * 	if last
 * if (its missing 1 val, put it)
 * if (colunaleft1 == 1 && colunaright1 == 3)
 * 		val[0] = 
*/

char	**fill_x(char **array, char **array)
{
	int	x;
	int	y;

	y = 0;
	while (array[y])
	{
		x = 0;
		while (array[y][x])
		{

			x++;
		}
		y++;
	}
}


char	**fill_y(char **array, char **array, int x)
{
	int	y;

	y = 0;
	while (array[y][x])
	{
		
		y++;
	}
}

char	**fill_1s_linha(char **array, char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		if (array[i] == 1)
			array[i] == 4;
		i++;
	}
	return (array);
}

char	**fill_1s_coluna(char **array, int coluna, int max_colum)
{
	int	linha;

	linha = 0;
	while (array[linha][coluna])
	{
		if (array[linha][coluna] == 1 && (coluna == 0
				|| coluna == max_colum))
			array[linha][coluna] == 4;
		linha++;
	}
	return (array);
}

/* char	**fill_4s_coluna(char **array, char **array, int coluna)
{
	int	i;

	i = 0;
	while (array[i][coluna])
	{
		if (array[i][coluna] == 4)
		{
			array[0][coluna] == 1;
			array[1][coluna] == 2;
			array[2][coluna] == 3;
			array[3][coluna] == 4;
		}
		i++;
	}
	return (array);
} */

int	all_ok(int	**array)
{
	int	ok;

	ok = 0;
	return (ok);
}

int	start_1(int array)
{
	int	i;

	i = 1;
	while (i <= 4 && all_ok(array) == 0)
	{
		if (i != 1)
		{
			array = possible_combs_4(i, 0);
			if (all_ok(array) == 0)
				array = possible_combs_4(i, 1);
			i++;
		}
	}
	return (array);
}

int	start_2(int array)
{
	int	i;

	i = 1;
	while (i <= 4 && all_ok(array) == 0)
	{
		if (i != 1)
		{
			array = possible_combs_1(i, 0);
			if (all_ok(array) == 0)
				array = possible_combs_1(i, 1);
		}
		if (i != 2 && all_ok(array) == 0)
		{
			array = possible_combs_2(i, 0);
			if (all_ok(array) == 0)
				array = possible_combs_2(i, 1);
		}
		if (i != 3 && all_ok(array) == 0)
		{
			array = possible_combs_3(i, 0);
			if (all_ok(array) == 0)
				array = possible_combs_3(i, 1);
		}
		i++;
	}
	return (array);
}

int	start_3(int array)
{
	int	i;

	i = 1;
	while (i <= 4 && all_ok(array) == 0)
	{
		if (i != 1)
		{
			array = possible_combs_1(i, 0);
			if (all_ok(array) == 0)
				array = possible_combs_1(i, 1);
		}
		if (i != 2 && all_ok(array) == 0)
		{
			array = possible_combs_2(i, 0);
			if (all_ok(array) == 0)
				array = possible_combs_2(i, 1);
		}
		i++;
	}
	return (array);
}


int	start_4(int array, int y)
{
	array[y] = {1, 2, 3, 4};
	return (array);
}

int	order(int **array)
{
	int	i;
	int	j;

	i = 1;
	while (all_ok(array == 0)
	{
		if (i == 5)
		{
			i = 1;
		}
		else
		{
			if (array[i] == 4)
				start_4(array);
			if (array[i] == 3)
				start_3(array);
			if (array[i] == 2)
				start_2(array);
			if (array[i] == 1)
				start_1(array);
		}
		i++;
	}
	return (array);
}
