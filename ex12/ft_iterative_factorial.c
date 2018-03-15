/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalombo <dpalombo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 11:08:38 by dpalombo          #+#    #+#             */
/*   Updated: 2017/11/07 11:18:57 by dpalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int resultat;

	if (nb > 12 || nb < 0)
		return (0);
	resultat = 1;
	while (nb > 0)
	{
		resultat = resultat * nb;
		nb--;
	}
	return (resultat);
}
