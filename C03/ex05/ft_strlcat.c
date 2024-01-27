/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 22:07:49 by lawences          #+#    #+#             */
/*   Updated: 2024/01/27 22:23:35 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
		i++;
	if (size <= i)
		return (src + size);
	j = -1;
	while (src[++j] && j < size - j - 1)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (i);
}
