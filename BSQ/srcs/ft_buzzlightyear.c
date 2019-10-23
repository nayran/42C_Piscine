/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buzzlightyear.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasimon- <nasimon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 15:21:02 by nasimon-          #+#    #+#             */
/*   Updated: 2019/10/23 16:50:24 by nasimon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_buzzlightyear(int *tam, char *str, int buf)
{
	if (*tam == buf)
	{
		if (ft_strnlen(str) == 0)
		{
			ft_putstr("");
			*tam = -1;
		}
	}
}
