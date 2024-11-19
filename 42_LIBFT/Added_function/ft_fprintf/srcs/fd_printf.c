/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fd_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  qcoudeyr <@student.42perpignan.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 10:49:28 by  qcoudeyr         #+#    #+#             */
/*   Updated: 2023/12/04 11:37:17 by  qcoudeyr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fd_printf.h"

static int	ft_putargument(int fd, char value, va_list args)
{
	if (value == 'c')
		return (fd_putchar_fd(va_arg(args, int), fd));
	if (value == 's')
		return (fd_putstr_fd(va_arg(args, char *), fd));
	if (value == 'p')
		return (fd_pttostr(fd, va_arg(args, unsigned long long)));
	if (value == 'd' || value == 'i')
		return (fd_putnbr_fd(va_arg(args, int), fd));
	if (value == 'u')
		return (fd_putnbru(fd, va_arg(args, unsigned int)));
	if (value == 'x')
		return \
	(fd_putnbr_base(fd, va_arg(args, unsigned int), "0123456789abcdef"));
	if (value == 'X')
		return \
	(fd_putnbr_base(fd, va_arg(args, unsigned int), "0123456789ABCDEF"));
	if (value == '%')
		return (fd_putchar_fd('%', fd));
	return (0);
}

int	fd_printf(int fd, const char *str, ...)
{
	va_list		args;
	int			i;
	char		*flag;
	int			len;

	len = 0;
	flag = "cspdiuxX%";
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && ft_strrchr(flag, str[i +1]) != NULL )
		{
			len += ft_putargument(fd, str[i +1], args);
			i++;
		}
		else
		{
			write (fd, str + i, 1);
			len += 1;
		}
		i++;
	}
	return (len);
}
