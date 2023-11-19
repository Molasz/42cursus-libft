/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 14:16:19 by molasz-a          #+#    #+#             */
/*   Updated: 2023/11/19 22:08:29 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *d, const void *s, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;

	dest = (unsigned char *)d;
	src = (unsigned char *)s;
	if (!n || dest == src)
		return (dest);
	if (dest > src)
	{
		while (n)
		{
			dest[n - 1] = src[n - 1];
			n--;
		}
	}
	else if (dest < src)
		ft_memcpy(dest, src, n);
	return (dest);
}
