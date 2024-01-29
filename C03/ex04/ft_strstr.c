/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 21:50:25 by lawences          #+#    #+#             */
/*   Updated: 2024/01/29 17:53:01 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	i = -1;
	j = 0;
	while (str[++i])
	{
		if (str[i] == to_find[j])
		{
			j++;
			if (to_find[j + 1] == '\0')
			{
				k = 0;
				while (k < (i + 1))
					str++;
				return (str);
			}
		}
		else
			j = 0;
	}
	return ('\0');
}
