/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cacetinho.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasimon- <nasimon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 14:56:02 by nasimon-          #+#    #+#             */
/*   Updated: 2019/10/23 15:01:39 by nasimon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void		ft_cacetinho(t_cria *info, char *str, t_salva *salva)
{
	int		position[2];
	int		max;

	position[1] = 0;
	while (position[1] + salva->max < info->altura)
	{
		position[0] = 0;
		while (position[0] + salva->max < info->largura)
		{
			max = ft_pos_check(str, info, position, salva->max);
			if (max > salva->max)
			{
				salva->max = max;
				salva->x = position[0];
				salva->y = position[1];
			}
			else if (max < 0)
			{
				if (position[0] + -max < info->largura)
					position[0] = position[0] + -max;
			}
			position[0]++;
		}
		position[1]++;
	}
}
