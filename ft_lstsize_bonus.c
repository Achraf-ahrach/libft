/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahrach <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:28:15 by aahrach           #+#    #+#             */
/*   Updated: 2022/11/01 14:53:50 by aahrach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int main()
{
	t_list *p = ft_lstnew("1");
	t_list *s = ft_lstnew("2");
	p->next = s;
	s = ft_lstnew("2");
	p->next->next = s;
	s = ft_lstnew("3");
	p->next->next->next = s;
	printf("%d",ft_lstsize(p));
}*/
