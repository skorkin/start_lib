/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzelda <bzelda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 08:50:36 by bzelda            #+#    #+#             */
/*   Updated: 2020/11/10 08:59:08 by bzelda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *reslist;

	if (!(reslist = malloc(ft_lstsize(lst) * sizeof(t_list *))))
	{
		(del(reslist));
		return (NULL);
	}
	while (lst)
	{
		reslist->content = f(lst->content);
		reslist = reslist->next;
		lst = lst->next;
	}
	return (reslist);
}
