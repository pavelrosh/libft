/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcounter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proshchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 11:58:32 by proshchy          #+#    #+#             */
/*   Updated: 2017/11/21 14:20:34 by proshchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wordcounter(const char *s)
{
	int res;
	int i;

	i = 0;
	res = 0;
	while (s[i])
	{
		if (ft_isalpha(s[i]) == 0)
			i++;
		else
		{
			while (ft_isalpha(s[i]) == 1)
			{
				if (s[i] == '\0')
					return (++res);
				else
					i++;
			}
			res++;
		}
	}
	return (res);
}
