/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  qcoudeyr <@student.42perpignan.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:52:03 by qcoudeyr          #+#    #+#             */
/*   Updated: 2023/04/21 22:55:32 by  qcoudeyr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_putnbr_fd(long long n, int fd)
{
	long long	nbm;
	int			len;

	nbm = n;
	len = 0;
	if (n < 0)
	{
		ft_putchar_fd(45, fd);
		nbm *= -1;
		len++;
	}
	if (nbm < 10)
	{
		ft_putchar_fd(nbm + 48, fd);
		len++;
	}
	else
	{
		len += ft_putnbr_fd(nbm / 10, fd);
		len += ft_putnbr_fd(nbm % 10, fd);
	}
	return (len);
}
