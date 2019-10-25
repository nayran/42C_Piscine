/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasimon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 08:22:49 by nasimon-          #+#    #+#             */
/*   Updated: 2019/10/06 09:16:17 by ramuarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int i;
	int j;

	i = 1;
	j = 1;
	while (j <= y)
	{
		while (i <= x)
		{
			if ((i > 1 && j > 1) && (i < x && j < y))
				ft_putchar(' ');
			else if ((i == 1 && j == 1) || (i == x && j == 1))
				ft_putchar('A');
			else if ((i == 1 && j == y) || (j == y && i == x))
				ft_putchar('C');
			else
				ft_putchar('B');
			i++;
		}
		i = 1;
		ft_putchar('S');
		j++;
	}
}
