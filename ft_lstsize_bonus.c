/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahrach <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:28:15 by aahrach           #+#    #+#             */
/*   Updated: 2022/10/31 18:46:15 by aahrach          ###   ########.fr       */
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
#include <stdio.h>
int main()
{
	int i;
	i = 0;
	t_list *p = ft_lstnew("1");
	while (i < 6)
	{
		p->next = ft_lstnew("5");
		i++;
	}
	i = ft_lstsize(p);
	printf("%d",i);
}
