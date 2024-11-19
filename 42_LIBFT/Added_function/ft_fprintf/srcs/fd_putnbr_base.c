/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fd_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  qcoudeyr <@student.42perpignan.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 18:38:45 by  qcoudeyr         #+#    #+#             */
/*   Updated: 2023/12/04 11:36:50 by  qcoudeyr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fd_printf.h"

static int	print_nbrbase(int fd, char *digits, t_ptnb *t)
{
	char	*buffer;
	int		i;

	buffer = malloc (sizeof(char) * t->len +1);
	buffer[t->len] = 0;
	i = t->len - 1;
	while (i >= 0)
	{
		buffer[i] = digits[(t->n % t->base_len)];
		t->n /= t->base_len;
		i--;
	}
	write(fd, buffer, t->len);
	free (buffer);
	return (t->len);
}

int	fd_putnbr_base(int fd, unsigned long long n, char *base)
{
	t_ptnb	t;

	t.base_len = ft_strlen(base);
	t.len = 0;
	t.n = n;
	if (n == 0)
		return (write(fd, "0", 1));
	while (n > 0)
	{
		t.len++;
		n /= t.base_len;
	}
	return (print_nbrbase(fd, base, &t));
}
