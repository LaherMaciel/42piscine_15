/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:29:14 by lawences          #+#    #+#             */
/*   Updated: 2024/02/14 19:41:01 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa_base(int nbr, char *base);
int		ft_strlen(char *str);

int	ft_strchar(char *base, char c, int i)
{
	while (base[++i])
		if (base[i] == c)
			return (1);
	return (0);
}

int	check_base(char *base)
{
	int	i;

	i = -1;
	if (!base)
		return (1);
	while (base[++i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == ' '
			|| base[i] <= 13 || ft_strchar(base, base[i], i) == 1)
			return (1);
	}
	if (i < 2)
		return (1);
	return (i);
}

int	add_to_val(int j, int base_len, int val)
{
	val = val * base_len;
	val = val + j;
	return (val);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	j;
	int	val;
	int	sign;

	i = 0;
	val = 0;
	sign = 1;
	if (check_base(base) == 1)
		return (0);
	while (str[i] <= 13 || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = sign * (-1);
	while (str[i])
	{
		j = -1;
		while (base[++j])
			if (str[i] == base[j])
				val = add_to_val(j, check_base(base), val);
		i++;
	}
	return (val * sign);
}

/**
 * @brief receives a base 'base_from' and convert it to 'base_to'
 *
 * @param nbr
 * @param base_from -> the original base of the value
 * @param base_to -> the new base of the value
 *
 * @return int new_nbr - the new value used the is the result of converting the
 * original value that was with the 'base_from' to 'base_to'
*/
char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	val;

	val = ft_atoi_base(nbr, base_from);
	printf("%i\n", val);
	nbr = ft_itoa_base(val, base_to);
	return (nbr);
}
