/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_largura.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasimon- <nasimon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 13:35:08 by nasimon-          #+#    #+#             */
/*   Updated: 2019/10/23 13:51:20 by nasimon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_largura(char *st, t_cria inf, int width)
{
	int		i;
	int		c;
	int		lines;

	i = inf.comprimento - 1;
	c = 0;
	lines = 0;
	while (st[++i])
		if (st[i] == '\n')
		{
			if (width != -1 && width != c)
				return (-1);
			width = c;
			c = 0;
			lines++;
		}
		else if (st[i] != inf.vazio && st[i] != inf.obstaculos)
			return (-1);
		else if (c == 2147483647)
			return (-1);
		else
			c++;
	if (lines == inf.altura)
		return (width);
	return (-1);
}
