/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lawences <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 16:57:29 by lawences          #+#    #+#             */
/*   Updated: 2024/02/03 17:17:19 by lawences         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



char **separar_parametros(char **str)
{
	
}

int	main(int argc, char **argv)
{
	char	**colunas;
	if (argc != 2)
		return (0);
	colunas = separar_parametros(argv[1]);
}