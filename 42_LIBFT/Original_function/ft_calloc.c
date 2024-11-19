/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  qcoudeyr <@student.42perpignan.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:50:52 by qcoudeyr          #+#    #+#             */
/*   Updated: 2023/04/21 22:53:17 by  qcoudeyr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (!size || !nmemb)
		return (malloc(0));
	if (((nmemb * size) / size != nmemb) || ((nmemb * size) / nmemb != size))
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (malloc(0));
	ft_memset(ptr, 0, nmemb * size);
	return (ptr);
}
