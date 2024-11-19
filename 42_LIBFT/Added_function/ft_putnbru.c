/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  qcoudeyr <@student.42perpignan.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 09:58:15 by  qcoudeyr         #+#    #+#             */
/*   Updated: 2023/04/21 23:05:09 by  qcoudeyr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_putnbru(unsigned int n)
{
	long	nbm;
	int		len;

	nbm = n;
	len = 0;
	if (nbm < 10)
	{
		ft_putchar_fd(nbm + 48, 1);
		len++;
	}
	else
	{
		len += ft_putnbru(nbm / 10);
		len += ft_putnbru(nbm % 10);
	}
	return (len);
}
