/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahrach <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 10:51:42 by aahrach           #+#    #+#             */
/*   Updated: 2022/10/28 17:38:59 by aahrach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
/*
#include <fcntl.h>
int main()
{
	int fd;
	fd = open("tst..",O_CREAT || O_WRONLY);
	ft_putchar_fd('a',fd);
}
#include <stdio.h>
int main()
{
	int i;

	i = 101;
	printf("%c\n",i);
	i = 0700;
	printf("%c\n",i);
}*/
