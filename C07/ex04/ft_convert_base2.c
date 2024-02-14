/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:29:17 by lawences          #+#    #+#             */
/*   Updated: 2024/02/14 20:16:48 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	ft_strchar(char *base, char c, int i);
int	check_base(char *base);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_count_size(long nbr, char *base, long i)
{
	if (nbr < ft_strlen(base))
		i++;
	else
	{
		i += ft_count_size(nbr / ft_strlen(base), base, i);
		i++;
	}
	return (i);
}

char	*ft_itoa_base_recr(long nbr, char *base, long i, char *str)
{
	if (nbr < ft_strlen(base))
		str[i] = base[nbr];
	else
	{
		str = ft_itoa_base_recr(nbr / ft_strlen(base), base, i - 1, str);
		str[i] = base[nbr % ft_strlen(base)];
	}
	return (str);
}

char	*ft_itoa_base(int nbr, char *base)
{
	int		len;
	char	*str;

	if (nbr < 0)
		len = ft_count_size(-nbr, base, 0) + 1;
	else
		len = ft_count_size(nbr, base, 0);
	if (len != -1)
	{
		str = malloc ((len + 1) * sizeof(char));
		if (nbr < 0)
		{
			str[0] = '-';
			str = ft_itoa_base_recr(-nbr, base, len - 1, str);
		}
		else
			str = ft_itoa_base_recr(nbr, base, len - 1, str);
		str[len] = '\0';
		return (str);
	}
	return (NULL);
}
