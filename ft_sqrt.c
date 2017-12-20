/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proshchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 12:28:04 by proshchy          #+#    #+#             */
/*   Updated: 2017/10/24 13:21:55 by proshchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int multipl;
	int res;

	multipl = 1;
	res = 1;
	if (nb <= 0)
		return (0);
	while (res)
	{
		if (res == nb)
			return (res / (multipl - 1));
		else if (res > nb)
			return (0);
		res = multipl * multipl;
		multipl++;
	}
	return (res);
}
