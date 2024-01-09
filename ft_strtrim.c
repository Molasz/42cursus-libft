/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:10:09 by molasz-a          #+#    #+#             */
/*   Updated: 2024/01/10 00:41:46 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	c_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	start = 0;
	end = ft_strlen(s);
	while (s[start] && c_in_set(s[start], set))
		start++;
	while (end > start && c_in_set(s[end - 1], set))
		end--;
	str = ft_calloc(sizeof (char), end - start + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s[start], end - start + 1);
	return (str);
}
