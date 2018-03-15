/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:08:57 by dpalombo          #+#    #+#             */
/*   Updated: 2017/11/09 13:09:01 by dpalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		nb;

	nb = 0;
	while (str[nb] != '\0')
	{
		nb++;
	}
	return (nb);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		tsrc;
	int		i;

	i = 0;
	tsrc = ft_strlen(src);
	str = (char*)malloc(sizeof(*str) * (tsrc + 1));
	while (i < tsrc)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
