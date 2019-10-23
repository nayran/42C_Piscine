/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tabuleiro.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasimon- <nasimon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 11:36:15 by nasimon-          #+#    #+#             */
/*   Updated: 2019/10/23 15:20:13 by nasimon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_salva	*tabuleiro(void)
{
	t_salva	*novo;

	novo = (t_salva *)malloc(sizeof(t_salva));
	if (novo)
	{
		novo->x = 0;
		novo->y = 0;
		novo->max = 0;
	}
	return (novo);
}
