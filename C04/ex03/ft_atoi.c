/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 22:30:42 by lawences          #+#    #+#             */
/*   Updated: 2024/01/27 23:09:53 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int	sign;
	int	val;
	
	i = 0;
	sign = 1;
	val = 0;
	while (str[i] <= 13 || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		val = val * 10;
		val = val + (str[i] - '0');
		i++;
	}
	val = val * sign;
	return (val);
}
