/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 02:03:16 by lawences          #+#    #+#             */
/*   Updated: 2024/02/04 03:28:18 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief see if the value missing is in that colum
 * 
 * @param int **array - the array with all the values
 * @param int val_missing - the value missing
 * @param int coluna - the colum ur seaching
*/
int	search_last_colum(int **array, int val_missing, int coluna)
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

/**
 * @brief see if the value missing is in that line
 * 
 * @param int **array - the array with all the values
 * @param int val_missing - the value missing
 * @param int linha - the line ur seaching
*/
int	search_last_line(int **array, int val_missing, int linha)
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
int	**fill_last(int **array, int val_missing)
{
	int	linha_livre;
	int	coluna_livre;
	int	i;

	i = 1;
	linha_livre = 0;
	coluna_livre = 0;
	while (i < 5)
	{
		if (search_last_line(array, val_missing, i) == 0)
				linha_livre = i;
		if (search_last_colum(array, val_missing, i) == 0)
				coluna_livre = i;
		i++;
	}
	if (linha_livre == 0 || coluna_livre == 0)
		return (NULL);
	array[linha_livre][coluna_livre] = val_missing;
	return (array);
}

/**
 * @brief It counts the number of this the value being searched was found
 *
 * @param int   **array - The array that have all the values
 * @param int   seach_val- the value to be searched
 *
 * @return int - returns -2 if more then 1 value is missing, -1 if just one is
 * missing and 0 if all 4 where found.
*/
int	count_vals(int **array, int seach_val)
{
	int	found;
	int	i;
	int	j;

	i = 1;
	found = 0;
	while (i < 5)
	{
		j = 1;
		while (j < 5)
		{
			if (array[i][j] == seach_val)
				found++;
			j++;
		}
		i++;
	}
	if (found == 3)
		return (-1);
	if (found < 3)
		return (-2);
	return (0);
}

/**
 * @brief search for all missing values and if just 1 is missing it tries to put
 * it
 *
 * @param int   **array - The array that have all the values
 *
 * @return int  missing - the number of values missing (example if the 4's are
 * missing and the 1's then it will return 2) and return 0 if all positions where filled
*/
int	missing_val(int **array)
{
	int	i;
	int	missing;

	i = 1;
	missing == 0;
	while (i < 5)
	{
		if (count_vals(array, i) == -1)
			fill_last(array, i);
		if (count_vals(array, i) == -2)
			missing++;
	}
	return (missing);
}
