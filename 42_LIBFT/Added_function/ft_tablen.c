/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tablen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  qcoudeyr <@student.42perpignan.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 20:07:12 by  qcoudeyr         #+#    #+#             */
/*   Updated: 2023/12/24 20:08:14 by  qcoudeyr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_tablen(void **tabl)
{
	int	index;

	index = 0;
	if (tabl == NULL || *tabl == NULL)
		return (0);
	while (tabl[index] != NULL)
		index++;
	return (index);
}
