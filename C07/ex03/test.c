/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:52:28 by lawences          #+#    #+#             */
/*   Updated: 2024/02/16 00:41:08 by lawences         ###   ########.fr       */
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
	int		i;

	sep = "_|_";
	strstr[0] = "test";
	strstr[1] = "hey";
	strstr[2] = "hello";
	strstr[3] = "42";
	strstr[4] = NULL;
	i = -1;
	while (++i < 6)
	{
		str = ft_strjoin(i, strstr, sep);
		printf("%s\n", str);
		if (str)
			free(str);
	}
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