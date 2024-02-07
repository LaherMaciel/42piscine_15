/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:32:56 by lawences          #+#    #+#             */
/*   Updated: 2024/02/06 16:01:01 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;
	long	val;
	
	i = 0;
	val = nb;
	while ((i * i) <= val)
	{
		if ((i * i) == val)
			return (i);
		i++;
	}
	return (0);
}
