/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  qcoudeyr <@student.42perpignan.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 10:49:28 by  qcoudeyr         #+#    #+#             */
/*   Updated: 2023/04/11 14:37:34 by  qcoudeyr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	ft_putargument(char value, va_list args)
{
	if (value == 'c')
		return (ft_putchar_fd(va_arg(args, int), 1));
	if (value == 's')
		return (ft_putstr_fd(va_arg(args, char *), 1));
	if (value == 'p')
		return (ft_pttostr(va_arg(args, unsigned long long)));
	if (value == 'd' || value == 'i')
		return (ft_putnbr_fd(va_arg(args, int), 1));
	if (value == 'u')
		return (ft_putnbru(va_arg(args, unsigned int)));
	if (value == 'x')
		return (ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef"));
	if (value == 'X')
		return (ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF"));
	if (value == '%')
		return (ft_putchar_fd('%', 1));
	return (0);
}

int	ft_printf(const char *str, ...)
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
			len += ft_putargument(str[i +1], args);
			i++;
		}
		else
		{
			write (1, str + i, 1);
			len += 1;
		}
		i++;
	}
	return (len);
}
