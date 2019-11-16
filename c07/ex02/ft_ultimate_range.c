/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasimon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 11:28:54 by nasimon-          #+#    #+#             */
/*   Updated: 2019/10/22 13:34:51 by nasimon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int aux;
	int size;
	int y;

	size = max - min;
	*range = malloc(size * sizeof(int));
	if (min >= max)
	{
		range[0] = NULL;
		return (0);
	}
	aux = min;
	y = 0;
	while (aux < max)
	{
		range[0][y] = aux;
		y++;
		aux++;
	}
	return (y);
}
