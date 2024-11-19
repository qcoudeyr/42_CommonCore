/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fd_pttostr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  qcoudeyr <@student.42perpignan.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 14:17:21 by  qcoudeyr         #+#    #+#             */
/*   Updated: 2023/12/04 11:26:48 by  qcoudeyr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fd_printf.h"

static int	fd_print_nbrbase(int fd, int len, char *dts, unsigned long long n)
{
	char	*buffer;
	int		i;

	buffer = malloc (sizeof(char) * len +1);
	buffer[len] = 0;
	i = len - 1;
	while (i >= 0 && n != 0)
	{
		buffer[i] = dts[(n % 16)];
		n /= 16;
		i--;
	}
	write(fd, buffer, len);
	free (buffer);
	return (len);
}

static int	putpt_base(int fd, unsigned long long n, char *base)
{
	int							len ;
	unsigned long long			temp;

	len = 0;
	temp = n;
	if (temp == 0)
		return (write(fd, "0", 1));
	while (temp > 0)
	{
		len++;
		temp /= 16;
	}
	temp = n;
	return (fd_print_nbrbase(fd, len, base, temp));
}

int	fd_pttostr(int fd, unsigned long long n)
{
	if (n == 0)
		return (fd_putstr_fd("(nil)", fd));
	return (fd_putstr_fd("0x", fd) + \
	putpt_base(fd, n, "0123456789abcdef"));
}
