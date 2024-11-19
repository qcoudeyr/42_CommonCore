/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  qcoudeyr <@student.42perpignan.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:52:03 by qcoudeyr          #+#    #+#             */
/*   Updated: 2023/04/21 22:55:42 by  qcoudeyr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	int		len;
	char	*strnull;

	strnull = "(null)";
	len = 0;
	if (s == NULL)
	{
		write (fd, (char *)strnull, 6);
		return (6);
	}
	while (*s)
	{
		write (fd, (char *)s++, 1);
		len += 1;
	}
	return (len);
}
