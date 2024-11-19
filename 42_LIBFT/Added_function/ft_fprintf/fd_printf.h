/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fd_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  qcoudeyr <@student.42perpignan.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 10:50:34 by  qcoudeyr         #+#    #+#             */
/*   Updated: 2023/12/04 11:37:49 by  qcoudeyr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FD_PRINTF_H
# define FD_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include "../../libft.h"

typedef struct s_putnbrbase
{
	int					len;
	int					base_len;
	unsigned long long	n;
}	t_ptnb;

int		fd_printf(int fd, const char *str, ...);
int		fd_putstr_fd(char *s, int fd);
int		fd_putnbru(int fd, unsigned int n);
int		fd_putnbr_base(int fd, unsigned long long n, char *base);
int		fd_putchar_fd(char c, int fd);
int		fd_putnbr_fd(long long n, int fd);
int		fd_pttostr(int fd, unsigned long long n);

#endif
