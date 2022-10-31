/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahrach <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:21:38 by aahrach           #+#    #+#             */
/*   Updated: 2022/10/31 18:21:30 by aahrach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

#include <stdio.h>

int main()
{
	t_list *root = ft_lstnew("2");
	root->next = ft_lstnew("3");
	ft_lstadd_front(&root, ft_lstnew("1"));
	while (!root)
	{
		printf("%s",root->content);
		root = root->next;
	}
}
