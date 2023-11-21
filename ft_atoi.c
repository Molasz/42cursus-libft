/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 22:11:08 by molasz-a          #+#    #+#             */
/*   Updated: 2023/11/20 16:05:55 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	sum_nums(int *nums, int size)
{
	int	mult;
	int	res;
	int	i;

	i = size;
	res = 0;
	mult = 1;
	while (i >= 0)
	{
		res += nums[i] * mult;
		mult *= 10;
		i--;
	}
	return (res);
}

int	ft_atoi(const char *str)
{
	size_t	i;
	int		nums[10];
	int		sign;
	int		count;

	i = 0;
	sign = 1;
	count = 0;
	while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		i++;
		if (str[i - 1] == '-')
			sign = -1;
	}
	while (str[i] == '0')
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nums[count] = str[i] - '0';
		count++;
		i++;
	}
	return (sum_nums(nums, count - 1) * sign);
}
