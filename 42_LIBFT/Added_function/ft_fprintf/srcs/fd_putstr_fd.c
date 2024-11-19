/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fd_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <lheinric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:52:03 by qcoudeyr          #+#    #+#             */
/*   Updated: 2023/10/25 11:19:13 by lheinric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fd_printf.h"

int	fd_putstr_fd(char *s, int fd)
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
