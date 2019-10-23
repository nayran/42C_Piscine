/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasimon- <nasimon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 11:36:36 by nasimon-          #+#    #+#             */
/*   Updated: 2019/10/23 15:06:48 by nasimon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_init(char *str)
{
	t_cria		*info;
	t_salva		*salva;
	int			width;

	info = ft_jumpline(str);
	salva = tabuleiro();
	if (info)
	{
		width = -1;
		info->largura = ft_largura(str, *info, width);
		if (info->largura > 0)
		{
			ft_cacetinho(info, str, salva);
			ft_preenche(salva, str, info);
			ft_resultado(str, info->comprimento);
			free(str);
		}
		else
			ft_putstr("map error\n");
	}
	else
		ft_putstr("map error\n");
}
