/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fd_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <lheinric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:52:03 by qcoudeyr          #+#    #+#             */
/*   Updated: 2023/10/25 11:26:10 by lheinric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fd_printf.h"

int	fd_putnbr_fd(long long n, int fd)
{
	long long	nbm;
	int			len;

	nbm = n;
	len = 0;
	if (n < 0)
	{
		fd_putchar_fd(45, fd);
		nbm *= -1;
		len++;
	}
	if (nbm < 10)
	{
		fd_putchar_fd(nbm + 48, fd);
		len++;
	}
	else
	{
		len += fd_putnbr_fd(nbm / 10, fd);
		len += fd_putnbr_fd(nbm % 10, fd);
	}
	return (len);
}
