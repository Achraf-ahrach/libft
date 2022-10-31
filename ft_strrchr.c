/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahrach <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 08:44:27 by aahrach           #+#    #+#             */
/*   Updated: 2022/10/27 11:25:06 by aahrach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		len;
	char	t;

	i = 0;
	t = c;
	len = ft_strlen(s);
	while (len != 0 || s[len] == t)
	{
		if (s[len] == t)
			return (((char *)s) + len);
		len--;
	}
	return (NULL);
}
