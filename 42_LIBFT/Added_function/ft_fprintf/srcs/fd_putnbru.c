/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fd_putnbru.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <lheinric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 09:58:15 by  qcoudeyr         #+#    #+#             */
/*   Updated: 2023/10/25 11:25:32 by lheinric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fd_printf.h"

int	fd_putnbru(int fd, unsigned int n)
{
	long	nbm;
	int		len;

	nbm = n;
	len = 0;
	if (nbm < 10)
	{
		fd_putchar_fd(nbm + 48, fd);
		len++;
	}
	else
	{
		len += fd_putnbru(fd, nbm / 10);
		len += fd_putnbru(fd, nbm % 10);
	}
	return (len);
}
