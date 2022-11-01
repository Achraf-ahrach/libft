/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahrach <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:35:25 by aahrach           #+#    #+#             */
/*   Updated: 2022/11/01 16:33:56 by aahrach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*p;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	p = ft_lstlast(*lst);
	p->next = new;
}
/*
#include <stdio.h>
int main()
{
	t_list *p = ft_lstnew("1");
	t_list *s = ft_lstnew("2");
	p->next = s;
	s = ft_lstnew("3");
	p->next->next = s;
	s = ft_lstnew("4");
	p->next->next->next = s;
	s = ft_lstnew("5");
	p->next->next->next->next = s;
	s = ft_lstnew("5");
	ft_lstadd_back(&p,s);
	while (p)
	{
		printf("%s\n",p->content);
		p = p->next;
	}
}*/
