/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasimon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 11:20:19 by nasimon-          #+#    #+#             */
/*   Updated: 2019/10/22 05:32:05 by nasimon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *x;
	int aux;
	int size;
	int *aux2;

	if (max <= min)
	{
		x = NULL;
		return (x);
	}
	size = max - min;
	x = (int *)malloc(size * sizeof(int));
	aux2 = x;
	aux = min;
	while (aux < max)
	{
		*x = aux;
		x++;
		aux++;
	}
	x = aux2;
	return (x);
}
