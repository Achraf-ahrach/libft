/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahrach <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:32:36 by aahrach           #+#    #+#             */
/*   Updated: 2022/10/24 11:11:39 by aahrach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p;
	int		i;
	int		j;

	j = 0;
	i = ft_strlen(s);
	p = malloc((i + 1) * sizeof(char));
	if (!p)
		return (NULL);
	while (j < i)
	{
		p[j] = f(j, s[j]);
		j++;
	}
	p[j] = '\0';
	return (p);
}
/*
char	big(unsigned int j, char c)
{
    char     s;
    s =  c - 32;
    return (s);
}
int main()
{
    const char a[] = "achraf";
    printf("%s",ft_strmapi(a, big));
}*/
