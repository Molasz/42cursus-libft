/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:10:09 by molasz-a          #+#    #+#             */
/*   Updated: 2023/11/20 17:19:10 by molasz-a         ###   ########.fr       */
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

static int	final_size(char const *str, char const *set)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i] && c_in_set(str[i], set))
		i++;
	count = i;
	i = ft_strlen(str) - 1;
	if (count - 1 == i)
		return (0);
	while (c_in_set(str[i], set))
	{
		count++;
		i--;
	}
	return (ft_strlen(str) - count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	strlen;
	char	*str;

	i = 0;
	j = 0;
	strlen = final_size(s1, set);
	str = ft_calloc(sizeof (char), strlen + 1);
	if (!str)
		return (NULL);
	while (s1[i] && c_in_set(s1[i], set))
		i++;
	while (j < strlen)
	{
		str[j] = s1[i + j];
		j++;
	}
	return (str);
}
