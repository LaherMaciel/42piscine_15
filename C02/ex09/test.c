/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <lawences@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 08:31:35 by lawences          #+#    #+#             */
/*   Updated: 2024/01/26 08:48:04 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	*str;
	int		size;

	size = strlen("salut, comment tu vas"\
		" ? 42mots quarante-deux; cinquante+et+un");
	str = malloc (size * sizeof(char));
	if (str == NULL)
	{
		printf("Error allocating memory\n");
		return (-1);
	}
	snprintf(str, size, "%s", "salut, comment tu vas"\
		" ? 42mots quarante-deux; cinquante+et+un");
	printf("str int -> %s\n", str);
	str = ft_strcapitalize(str);
	printf("str out -> %s\n", str);
	free (str);
	return (0);
}
