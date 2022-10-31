/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahrach <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:46:46 by aahrach           #+#    #+#             */
/*   Updated: 2022/10/24 11:06:02 by aahrach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	int		k;
	int		i;
	int		j;
	int		c;

	k = 0;
	c = 0;
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	p = malloc((i + j + 1) * sizeof(char));
	if (p == 0)
		return (NULL);
	while (k < i)
	{
		p[k] = s1[k];
		k++;
	}
	while (k < i + j)
	{
		p[k++] = s2[c++];
	}
	p[k] = '\0';
	return (p);
}
