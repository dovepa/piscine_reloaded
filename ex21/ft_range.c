/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalombo <dpalombo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:59:46 by dpalombo          #+#    #+#             */
/*   Updated: 2017/11/09 14:55:56 by dpalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*ret;
	int		i;
	int		y;

	if (max <= min)
	{
		return (NULL);
	}
	else
	{
		i = max - min;
		ret = (int*)malloc(sizeof(*ret) * (i));
		y = 0;
		while (min < max)
		{
			ret[y] = min;
			min++;
			y++;
		}
	}
	return (ret);
}
