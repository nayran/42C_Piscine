/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pos_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasimon- <nasimon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 15:00:42 by nasimon-          #+#    #+#             */
/*   Updated: 2019/10/23 16:50:14 by nasimon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int			ft_pos_check(char *str, t_cria *info, int position[2], int tam)
{
	int		i;
	int		temp;

	i = tam + 1;
	while (1)
	{
		if (position[0] + i > info->largura)
			return (i - 1);
		else if (position[1] + i - 1 >= info->altura)
			return (i - 1);
		temp = ft_quadrado(str, position, info, i);
		if (temp > 0)
		{
			i++;
			while (ft_big_kiko(str, position, info, i))
				i++;
			return (i - 1);
		}
		else
			return (temp);
	}
}
