/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahrach <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:21:38 by aahrach           #+#    #+#             */
/*   Updated: 2022/11/01 11:23:22 by aahrach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>
int main()
{
	t_list *p = ft_lstnew("2");
	t_list *s = ft_lstnew("3");
	p->next = s;
	*s = ft_lstnew("4");
	p->next->next = s;
	*s = ft_lstnew("5");
	p->next->next->next = s;
}*/
