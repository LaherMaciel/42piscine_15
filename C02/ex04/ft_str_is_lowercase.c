/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <lawences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:39:57 by lawences          #+#    #+#             */
/*   Updated: 2024/01/28 12:22:56 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (!(str[i] >= 97 && str[i] <= 122))
			return (0);
	}
	return (1);
}
