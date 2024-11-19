/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pttostr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  qcoudeyr <@student.42perpignan.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 14:17:21 by  qcoudeyr         #+#    #+#             */
/*   Updated: 2023/04/21 23:05:07 by  qcoudeyr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	print_nbrbase(int len, char *digits, unsigned long long n)
{
	char	*buffer;
	int		i;

	buffer = malloc (sizeof(char) * len +1);
	buffer[len] = 0;
	i = len - 1;
	while (i >= 0 && n != 0)
	{
		buffer[i] = digits[(n % 16)];
		n /= 16;
		i--;
	}
	write(1, buffer, len);
	free (buffer);
	return (len);
}

static int	putpt_base(unsigned long long n, char *base)
{
	int							len ;
	unsigned long long			temp;

	len = 0;
	temp = n;
	if (temp == 0)
		return (write(1, "0", 1));
	while (temp > 0)
	{
		len++;
		temp /= 16;
	}
	temp = n;
	return (print_nbrbase(len, base, temp));
}

int	ft_pttostr(unsigned long long n)
{
	if (n == 0)
		return (ft_putstr_fd("(nil)", 1));
	return (ft_putstr_fd("0x", 1) + \
	putpt_base(n, "0123456789abcdef"));
}
