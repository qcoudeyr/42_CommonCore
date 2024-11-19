/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  qcoudeyr <@student.42perpignan.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 20:09:18 by  qcoudeyr         #+#    #+#             */
/*   Updated: 2023/12/24 20:12:03 by  qcoudeyr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*tabfree(void **ptr)
{
	int	i;

	i = 0;
	if (ptr == NULL)
		return (ptr);
	while (ptr[i] != NULL)
	{
		ptr[i] = pfree(ptr[i]);
		i++;
	}
	ptr = pfree(ptr);
	return (NULL);
}
