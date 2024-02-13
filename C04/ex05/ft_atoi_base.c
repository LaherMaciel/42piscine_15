/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:10:10 by lawences          #+#    #+#             */
/*   Updated: 2024/02/11 00:40:15 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	return (val);
}
