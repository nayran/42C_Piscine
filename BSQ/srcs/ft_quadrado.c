/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quadrado.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasimon- <nasimon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 15:02:59 by nasimon-          #+#    #+#             */
/*   Updated: 2019/10/23 16:33:31 by nasimon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int			ft_quadrado(char *str, int pos[2], t_cria *info, int tam)
{
	int i;
	int j;
	int start;

	start = info->comprimento + pos[0] + (pos[1]) * (info->largura + 1);
	i = tam - 1;
	while (i >= 0)
	{
		j = 0;
		while (j < tam)
		{
			if (str[start + i + j * (info->largura + 1)] == info->obstaculos)
				return (-i);
			else if (str[start + i + j * (info->largura + 1)] == '\n')
				return (0);
			j++;
		}
		i--;
	}
	return (1);
}

