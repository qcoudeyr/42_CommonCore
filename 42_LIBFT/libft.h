/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  qcoudeyr <@student.42perpignan.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 09:38:47 by qcoudeyr          #+#    #+#             */
/*   Updated: 2023/12/24 20:10:38 by  qcoudeyr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <fcntl.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include "./Added_function/ft_fprintf/fd_printf.h"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

long int	ft_atoi(const char *str);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_wordct(const char *s, char chr);
int			ft_isprint(int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			ft_tolower(int c);
int			ft_toupper(int c);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		ft_bzero(void *s, size_t n);
void		*ft_calloc(size_t count, size_t size);
void		*ft_memchr(const void *s, int c, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t n);
void		*ft_memset(void *b, int c, size_t len);
int			ft_putchar_fd(char c, int fd);
void		ft_putendl_fd(char *s, int fd);
int			ft_putnbr_fd(long long n, int fd);
int			ft_putstr_fd(char *s, int fd);
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
int			ft_strcmp(const char *s1, const char *s2);
char		**ft_splitq(char const *str);
char		*ft_strchr(const char *s, int c);
char		*ft_strnstr(const char *str, const char *tosearch, size_t len);
char		*ft_strdup(const char *s1);
char		*ft_strrchr(const char *s, int c);
char		*ft_strtrim(char const *s1, char const set);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_itoa(int n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		**ft_split(char const *s, char c);
char		**ft_splitq(char const *str);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
size_t		ft_strlen(const char *s);

t_list		*ft_lstnew(void *content);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_front(t_list **lst, t_list *new);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void*));
void		ft_lstclear(t_list **lst, void (*del)(void*));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
int			ft_lstsize(t_list *lst);

int			ft_printf(const char *str, ...);
int			ft_pttostr(unsigned long long n);
int			ft_putnbru(unsigned int n);
int			ft_putnbr_base(unsigned long long n, char *base);
void		*tabfree(void **ptr);
void		*pfree(void *ptr);
int			ft_tablen(void **tabl);
int			ft_checkaccess(char *str);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10

struct	s_gnlstruct
{
	char	*buf;
	char	*line;
	int		vread;
};

char		*get_next_line(int fd);
# endif

#endif
