/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .main.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  qcoudeyr <@student.42perpignan.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 09:53:15 by  qcoudeyr         #+#    #+#             */
/*   Updated: 2023/11/21 10:30:35 by  qcoudeyr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char **test;

	test = ft_splitq("echo \'ceci est un test\' \'avec 2 string\'");
	for (int i = 0; test[i] != 0; i++)
		printf("%s\n",test[i]);
	return 0;
}
//Commande pour test une fonction de la libft avec un main perso
//make re && gcc -g -I. -L. main.c -lft -o debug
