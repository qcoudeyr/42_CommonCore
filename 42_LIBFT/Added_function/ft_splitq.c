/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitq.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  qcoudeyr <@student.42perpignan.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 09:43:46 by  qcoudeyr         #+#    #+#             */
/*   Updated: 2023/12/17 12:10:35 by  qcoudeyr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	ft_wordctq(const char *s, char chr)
{
	int	c;
	int	index;

	c = 0;
	index = 0;
	while (s[index] != 0)
	{
		while (s[index] == chr && s[index] != 0)
			index++;
		if (s[index] != chr && s[index] != 0)
			c++;
		while (s[index] != chr && s[index] != 0)
		{
			if (s[index] == 39 || s[index] == 34)
			{
				index++;
				while (s[index] != 39 && s[index] != 34 && s[index] != 0)
					index++;
			}
			index++;
		}
	}
	return (c);
}

static size_t	ft_wordlen(const char *s, char chr)
{
	int	c;
	int	quote;
	int	qu;

	c = 0;
	quote = 0;
	qu = *s;
	if (qu == 39 || qu == 34)
	{
		quote = 1;
		c++;
		s++;
	}
	else
		qu = 0;
	while (s != 0 && *s != 0 && (*s != chr || (quote % 2 != 0)))
	{
		if (*s == qu)
			quote += 1;
		c++;
		s++;
	}
	return (c);
}

static char	**ft_empty_tab(void)
{
	char	**tab;

	tab = (char **)malloc(sizeof(char *));
	if (!tab)
		return (NULL);
	tab[0] = NULL;
	return (tab);
}

char	**ft_splitq(char const *str)
{
	int		i;
	int		index;
	char	**tab;
	char	*s;

	s = ft_strdup(str);
	if (!str || *s == '\0')
		return (ft_empty_tab());
	i = 0;
	index = 0;
	tab = ft_calloc((ft_wordctq(s, ' ') * 2), sizeof(char *));
	while (s[i] != 0 || (ft_strchr(" \n\t", s[i]) != 0 && s[i + 1] == 0))
	{
		while (s[i] == ' ' && s[i] != 0)
			i++;
		if (s[i] == 0)
			break ;
		tab[index] = ft_calloc(ft_wordlen(&s[i], ' ') + 10, sizeof(char));
		ft_strlcpy(tab[index++], &s[i], ft_wordlen(&s[i], ' ') + 1);
		i += ft_wordlen(&s[i], ' ');
	}
	tab[index] = NULL;
	free (s);
	return (tab);
}
