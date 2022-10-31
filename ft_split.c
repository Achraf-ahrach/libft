/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahrach <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 10:00:36 by aahrach           #+#    #+#             */
/*   Updated: 2022/10/29 15:10:18 by aahrach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char const *s, char c, int *a)
{
	int	i;
	int	j;

	*a = 0;
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i++] != c)
		{
			if (s[i] == c || s[i] == '\0')
				j++;
		}
	}
	return (j);
}

static int	ft_hseb(const char *s, char c, int *x)
{
	int	i;

	*x = 0;
	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		a;
	int		i;
	int		x;

	p = malloc((ft_check(s, c, &a) + 1) * sizeof(char *));
	if (!p)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		i = ft_hseb(s, c, &x);
		if (i != 0)
		{
			p[a] = malloc(i + 1 * sizeof(char));
			if (!p[a])
				free(p);
			while (x < i)
				p[a][x++] = *((char *)s++);
			p[a++][x] = '\0';
		}
	}
	p[a] = (NULL);
	return (p);
}
/*
#include <stdio.h>
int main()
{
	char **p;
	int i = 0;
	char s[] = "  Aaa AA AAA    AAAA  AAAAA";
	p = ft_split(s, ' ');
	while (p[i] != NULL)
		printf("%s\n",p[i++]);
}*/
