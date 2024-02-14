/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:52:28 by lawences          #+#    #+#             */
/*   Updated: 2024/02/13 22:49:04 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char	*sep;
	char	*str;
	char	*strstr[5];

	sep = "|";
	strstr[0] = "test1";
	strstr[1] = "";
	strstr[2] = "saf";
	strstr[3] = "daskjhf";
	strstr[4] = NULL;
	str = ft_strjoin(0, strstr, sep);
	printf("%s", str);
	free(str);
	return (0);
}

/* 
int	main(int argc, char **argv)
{
	char	*sep;
	char	*str;

	(void) argc;
	sep = " ";
	str = ft_strjoin(5, argv, sep);
	printf("%s", str);
	free(str);
	return (0);
}
 */