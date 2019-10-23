/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_kiko.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasimon- <nasimon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 11:36:29 by nasimon-          #+#    #+#             */
/*   Updated: 2019/10/23 16:50:21 by nasimon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_big_kiko(char *str, int pos[2], t_cria *info, int tam)
{
	int		x;
	int		y;
	int		init;

	x = tam - 1;
	y = 0;
	init = info->comprimento + pos[0] + (pos[1]) * (info->largura + 1);
	if (pos[0] + tam > info->largura)
		return (0);
	else if (pos[1] + tam > info->altura)
		return (0);
	while (y < tam - 1)
		if (str[init + x + y * (info->largura + 1)] == info->vazio)
			y++;
		else
			return (0);
	x = 0;
	while (x < tam)
		if (str[init + x + y * (info->largura + 1)] == info->vazio)
			x++;
		else
			return (0);
	return (1);
}
