/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 02:00:16 by molasz-a          #+#    #+#             */
/*   Updated: 2023/11/21 03:00:22 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void del(void *))
{
	t_list	*l;
	t_list	*tmp;

	l = *lst;
	while (l)
	{
		tmp = l;
		l = l->next;
		del(tmp->content);
		free(tmp);
	}
}
