/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 01:50:56 by molasz-a          #+#    #+#             */
/*   Updated: 2023/11/21 02:44:33 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *n)
{
	t_list	*lstlast;

	if (*lst)
	{
		lstlast = ft_lstlast(*lst);
		lstlast->next = n;
	}
	else
		*lst = n;
}
