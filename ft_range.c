/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proshchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 18:48:16 by proshchy          #+#    #+#             */
/*   Updated: 2017/11/21 14:27:03 by proshchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *arr;
	int i;

	i = 0;
	if (min > max || min == max)
		return (NULL);
	else
	{
		arr = (int*)malloc(sizeof(*arr) * (max - min));
		while (min < max)
		{
			arr[i] = min;
			i++;
			min++;
		}
	}
	return (arr);
}
