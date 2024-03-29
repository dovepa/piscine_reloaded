/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalombo <dpalombo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 12:44:37 by dpalombo          #+#    #+#             */
/*   Updated: 2017/11/09 13:05:10 by dpalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int i;
	int y;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			y = 0;
			while (argv[i][y] != '\0')
			{
				ft_putchar(argv[i][y]);
				y++;
			}
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
