/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 22:07:49 by lawences          #+#    #+#             */
/*   Updated: 2024/02/13 21:37:40 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	src_size;

	dest_size = 0;
	while (dest[dest_size])
		dest_size++;
	if (size - 1 < dest_size)
		return (ft_strlen(src) + size);
	src_size = -1;
	while (src[++src_size] && dest_size < size - 1)
	{
		dest[dest_size] = src[src_size];
		dest_size++;
	}
	dest[dest_size] = '\0';
	return (ft_strlen(dest));
}
