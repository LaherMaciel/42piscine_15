/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 19:53:46 by lawences          #+#    #+#             */
/*   Updated: 2024/01/29 18:42:03 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	f;

	f = 0;
	while (src[f])
		f++;
	if (size == 0)
		return (f);
	i = -1;
	while (src[++i] && i < size)
		dest[i] = src[i];
	dest[i] = '\0';
	return (f);
}
