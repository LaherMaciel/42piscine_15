/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 19:53:46 by lawences          #+#    #+#             */
/*   Updated: 2024/01/27 21:35:59 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = -1;
	while (src[++i] && i < size)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (i);
}
