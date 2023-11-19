/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 23:35:48 by molasz-a          #+#    #+#             */
/*   Updated: 2023/11/19 23:41:25 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		src_len;
	char	*str;

	src_len = ft_strlen(src);
	str = (char *)malloc((src_len + 1) * sizeof (char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, src, src_len + 1);
	return (str);
}
