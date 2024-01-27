/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:12:27 by lawences          #+#    #+#             */
/*   Updated: 2024/01/27 21:30:38 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
	}
	return (str);
}

char *ft_strcapitalize(char *str)
{
	int		i;
	int		upper;

	str = ft_strlowcase(str);
	upper = 1;
	i = -1;
	while (str[++i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (upper == 1)
			{
				str[i] = str[i] - 32;
				upper = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			upper = 0;
		else
			upper = 1;
	}
	return (str);
}
