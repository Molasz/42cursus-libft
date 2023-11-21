/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 02:06:14 by molasz-a          #+#    #+#             */
/*   Updated: 2023/11/21 02:30:12 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_all(t_list *lst, void del(void *))
{
	t_list	*next;

	next = lst;
	while (lst)
	{
		next = lst;
		del(lst->content);
		free(lst);
		next = next->next;
	}
}

t_list	*ft_lstmap(t_list *lst, void *f(void *), void del(void *))
{
	t_list	*res;
	t_list	*tmp;

	res = NULL;
	while (lst->next)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			free_all(res, del);
			return (NULL);
		}
		ft_lstadd_back(&res, tmp);
		lst = lst->next;
	}
	return (res);
}
