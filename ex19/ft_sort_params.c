/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalombo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:07:25 by dpalombo          #+#    #+#             */
/*   Updated: 2017/11/09 13:07:30 by dpalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ascii_sort(char **tab, int c)
{
	int		ct;
	int		cc;
	char	*tmp;

	ct = 1;
	while (ct < (c - 1))
	{
		cc = 0;
		while (tab[ct][cc] == tab[ct + 1][cc])
			cc++;
		if (tab[ct][cc] > tab[ct + 1][cc])
		{
			tmp = tab[ct];
			tab[ct] = tab[ct + 1];
			tab[ct + 1] = tmp;
			ct = 0;
		}
		ct++;
	}
}

void	ft_print(char **tab, int c)
{
	int		i;
	int		y;

	if (c > 1)
	{
		i = 1;
		while (i < c)
		{
			y = 0;
			while (tab[i][y] != '\0')
			{
				ft_putchar(tab[i][y]);
				y++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}

int		main(int argc, char **argv)
{
	ascii_sort(argv, argc);
	ft_print(argv, argc);
	return (0);
}
