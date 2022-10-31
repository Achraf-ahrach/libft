/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahrach <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:12:17 by aahrach           #+#    #+#             */
/*   Updated: 2022/10/24 10:57:44 by aahrach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write (fd, &s[i++], 1);
	}
}
/*
#include <fcntl.h>
int main()
{
	char s[] = "achraf";
	int fd = open("test.",O_CREAT | O_WRONLY);
	ft_putstr_fd(s, fd);
}*/
