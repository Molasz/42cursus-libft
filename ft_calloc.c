/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 00:35:34 by molasz-a          #+#    #+#             */
/*   Updated: 2023/11/20 00:49:11 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	void	*mem;
	char	*cmem;

	mem = (void *)malloc(nmemb * size);
	if (!mem)
		return (NULL);
	cmem = (char *)mem;
	i = 0;
	while (i < size * nmemb)
		cmem[i++] = 0;
	return (mem);
}
