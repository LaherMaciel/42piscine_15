/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <lawences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 21:50:25 by lawences          #+#    #+#             */
/*   Updated: 2024/01/28 12:28:59 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	while (str[++i])
	{
		if (str[i] == to_find[j])
		{
			j++;
			if (to_find[j + 1] == '\0')
				return (str[i - j]);
		}
		else
			j = 0;
	}
	return ('\0');
}
