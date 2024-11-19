/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  qcoudeyr <@student.42perpignan.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 08:50:39 by  qcoudeyr         #+#    #+#             */
/*   Updated: 2023/09/28 08:51:00 by  qcoudeyr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_wordct(const char *s, char chr)
{
	int	c;
	int	index;

	c = 0;
	index = 0;
	while (s[index] != 0)
	{
		while (s[index] == chr && s[index] != 0)
			index++;
		if (s[index] != chr && s[index] != 0)
			c++;
		while (s[index] != chr && s[index] != 0)
			index++;
	}
	return (c);
}
