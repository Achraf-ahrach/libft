/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahrach <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:09:28 by aahrach           #+#    #+#             */
/*   Updated: 2022/10/25 18:09:39 by aahrach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*c1;
	unsigned char	*c2;

	i = 0;
	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	while (i < n && (c1[i] || c2[i]))
	{
		if (c1[i] != c2[i])
			return (c1[i] - c2[i]);
		i++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
	char s1[]="achk\0g";
	char s2[]="achk\0f";
	printf("%d\n",ft_strncmp(s1, s2, 10));
	printf("%d\n",strncmp(s1, s2, 10));

	char s11[]="achksg";
	char s22[]="achksf\0";
	printf("%d\n",ft_strncmp(s11, s22, 10));
	printf("%d\n",strncmp(s11, s22, 10));
}*/
