/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <lawences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 21:40:37 by lawences          #+#    #+#             */
/*   Updated: 2024/01/24 21:51:55 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = -1;
	while (src[++i])
	{
		if (i <= n)
			dest[i] = src[i];
		else
			dest[i] = '\0';
	}
	dest[i] = '\0';
	return (dest);
}
