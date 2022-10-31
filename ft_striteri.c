/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahrach <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:42:50 by aahrach           #+#    #+#             */
/*   Updated: 2022/10/24 11:04:34 by aahrach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void f(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
			i++;
	}
}
/*
void	f(unsigned int i, char *s)
{
	*s -= 32;
}

int main()
{
	char s[] = "acharf";
	ft_striteri(s, f);
	printf("%s",s);
}*/
