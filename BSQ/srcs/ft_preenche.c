/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_preenche.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasimon- <nasimon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 14:46:23 by nasimon-          #+#    #+#             */
/*   Updated: 2019/10/23 14:47:32 by nasimon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void		ft_preenche(t_salva *salva, char *str, t_cria *info)
{
	int		x;
	int		y;
	int		position;

	y = 0;
	position = info->comprimento + salva->x + (salva->y) * (info->largura + 1);
	while (y < salva->max)
	{
		x = 0;
		while (x < salva->max)
		{
			str[position + x + y * (info->largura + 1)] = info->preenche;
			x++;
		}
		y++;
	}
}
