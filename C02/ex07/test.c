/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <lawences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 08:31:35 by lawences          #+#    #+#             */
/*   Updated: 2024/01/26 08:32:20 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	*str;
	int		size;

	size = 100;
	str = malloc (size * sizeof(char));
	if (str == NULL)
	{
		printf("Error allocating memory\n");
		return (-1);
	}
	snprintf(str, size, "%s", "TeSt");
	printf("str int -> %s\n", str);
	str = ft_strupcase(str);
	printf("str out -> %s\n", str);
	free (str);
	return (0);
}
