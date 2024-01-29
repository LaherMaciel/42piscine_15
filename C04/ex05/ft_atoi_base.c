/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <lawences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:10:10 by lawences          #+#    #+#             */
/*   Updated: 2024/01/29 01:54:08 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strchar(char *base, char c, int i)
{
	while (base[++i])
	{
		if (base[i] == c)
			return (1);
	}
	return (0);
}

int	check_base(char *base)
{
	int	i;

	i = -1;
	while (base[++i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == ' '
			|| ft_strchar(base, base[i], i) == 1)
			return (1);
	}
	if (i < 2)
		return (1);
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	j;
	int	val;
	int	base_len;

	i = 0;
	val = 0;
	base_len = check_base(base);
	if (base_len == 1)
		return (0);
	while (str[i] <= 13)
		i++;
	while (str[i])
	{
		j = -1;
		while (base[++j])
		{
			if (str[i] == base[j])
			{
				val = val * 10;
				val = val + j;
			}
		}
		i++;
	}
	return (val);
}
